//
//  MyNewViewController.m
//  SalesManager
//
//  Created by iOS-Dev on 2017/11/22.
//  Copyright © 2017年 liu xueyan. All rights reserved.
//

#import "MyNewViewController.h"
#import "Constant.h"
#import "MyinfoCell.h"
#import "MyInfoListCell.h"
@interface MyNewViewController ()<UITableViewDelegate,UITableViewDataSource> {
    UITableView *mytabView;
    NSArray *dataArr;
    
}

@end

@implementation MyNewViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    leftImageView.hidden = YES;
    lblFunctionName.text = APPTITLE;
    lblFunctionName.textAlignment = NSTextAlignmentCenter;
    [self createUI];
    // Do any additional setup after loading the view.
}

-(void)createUI {
    dataArr = @[@{@"icon":@"tab_home_press",@"title":@"我的收藏"},@{@"icon":@"tab_home_press",@"title":@"数据同步"},@{@"icon":@"tab_home_press",@"title":@"常用短语"},@{@"icon":@"tab_home_press",@"title":@"数据中心"}];
    
    mytabView = [[UITableView alloc] initWithFrame:CGRectMake(0, 0, MAINWIDTH, MAINHEIGHT - 45) style:UITableViewStyleGrouped];
    mytabView.delegate = self;
    mytabView.dataSource = self;
    [self.view addSubview:mytabView];
}

-(NSInteger)numberOfSectionsInTableView:(UITableView *)tableView {
    return 4;
    
}

-(NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    if (section == 0 || section == 2 || section == 3) {
        return 1;
    }else {
        return 4;
    }
    
}

-(UITableViewCell*)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    if (indexPath.section == 0) {
       MyinfoCell *myInfocell = [tableView dequeueReusableCellWithIdentifier:@"MyinfoCell"];
        if(myInfocell==nil){
            NSArray *nib=[[NSBundle mainBundle]loadNibNamed:@"MyinfoCell" owner:self options:nil];
            for(id oneObject in nib)
            {
                if([oneObject isKindOfClass:[MyinfoCell class]])
                    myInfocell=(MyinfoCell *)oneObject;
            }
        }
        myInfocell.selectionStyle = UITableViewCellSelectionStyleNone;

        return myInfocell;
    }else if (indexPath.section == 1){

        MyInfoListCell *cell = [tableView dequeueReusableCellWithIdentifier:@"MyInfoListCell"];
        if(cell==nil){
            NSArray *nib=[[NSBundle mainBundle]loadNibNamed:@"MyInfoListCell" owner:self options:nil];
            for(id oneObject in nib)
            {
                if([oneObject isKindOfClass:[MyInfoListCell class]])
                    cell=(MyInfoListCell *)oneObject;
            }
        }
      
        NSDictionary *dic = dataArr[indexPath.row];
      
        cell.titleLab.text = [dic objectForKey:@"title"];
        cell.infoImagView.image = [UIImage imageNamed:[dic objectForKey:@"icon"]];
        cell.numberLab.hidden = YES;
        cell.selectionStyle = UITableViewCellSelectionStyleNone;

        return cell;
        
    }else if (indexPath.section == 2) {
        MyInfoListCell *cell = [tableView dequeueReusableCellWithIdentifier:@"MyInfoListCell"];
        if(cell==nil){
            NSArray *nib=[[NSBundle mainBundle]loadNibNamed:@"MyInfoListCell" owner:self options:nil];
            for(id oneObject in nib)
            {
                if([oneObject isKindOfClass:[MyInfoListCell class]])
                    cell=(MyInfoListCell *)oneObject;
            }
        }

        cell.titleLab.text = @"我的草稿";
        cell.infoImagView.image = [UIImage imageNamed:@"tab_home_press"];
        cell.selectionStyle = UITableViewCellSelectionStyleNone;
        return cell;
        
    } else {
        MyInfoListCell *cell = [tableView dequeueReusableCellWithIdentifier:@"MyInfoListCell"];
        if(cell==nil){
            NSArray *nib=[[NSBundle mainBundle]loadNibNamed:@"MyInfoListCell" owner:self options:nil];
            for(id oneObject in nib)
            {
                if([oneObject isKindOfClass:[MyInfoListCell class]])
                    cell=(MyInfoListCell *)oneObject;
            }
        }
        cell.numberLab.hidden = YES;
        cell.selectionStyle = UITableViewCellSelectionStyleNone;

        cell.titleLab.text = @"设置";
        cell.infoImagView.image = [UIImage imageNamed:@"tab_home_press"];
       
        return cell;
    }
   
    
}
-(CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath {
    if (indexPath.section == 0) {
        return 90;
    }
    return 50;
}

- (CGFloat)tableView:(UITableView *)tableView heightForHeaderInSection:(NSInteger)section {
    if (section == 0) {
        return 0;
    }
    return 10;
}

- (UIView *)tableView:(UITableView *)tableView viewForHeaderInSection:(NSInteger)section {
    UIView *headerView = [[UIView alloc] init];
    headerView.backgroundColor = [UIColor clearColor];
    return headerView;
}

//脚视图高度
- (CGFloat)tableView:(UITableView *)tableView heightForFooterInSection:(NSInteger)section {
    return 5;
}

- (UIView *)tableView:(UITableView *)tableView viewForFooterInSection:(NSInteger)section {
    UIView *footerView = [[UIView alloc] init];
    footerView.backgroundColor = [UIColor clearColor];
    return footerView;
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
