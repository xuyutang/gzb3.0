// Generated by the protocol buffer compiler.  DO NOT EDIT!

#import "ProtocolBuffers.h"

#import "User.pb.h"
#import "Generic.pb.h"
#import "PaperTemplate.pb.h"

@class AppSetting;
@class AppSetting_Builder;
@class Company;
@class Company_Builder;
@class Department;
@class Department_Builder;
@class Device;
@class Device_Builder;
@class Function;
@class Function_Builder;
@class Location;
@class Location_Builder;
@class PagePaperPost;
@class PagePaperPost_Builder;
@class PageUser;
@class PageUser_Builder;
@class Pagination;
@class Pagination_Builder;
@class PaperPost;
@class PaperPostMedia;
@class PaperPostMedia_Builder;
@class PaperPostParams;
@class PaperPostParams_Builder;
@class PaperPost_Builder;
@class PaperTemplate;
@class PaperTemplate_Builder;
@class Permission;
@class Permission_Builder;
@class Position;
@class Position_Builder;
@class SystemSetting;
@class SystemSetting_Builder;
@class User;
@class UserParams;
@class UserParams_Builder;
@class User_Builder;
#ifndef __has_feature
  #define __has_feature(x) 0 // Compatibility with non-clang compilers.
#endif // __has_feature

#ifndef NS_RETURNS_NOT_RETAINED
  #if __has_feature(attribute_ns_returns_not_retained)
    #define NS_RETURNS_NOT_RETAINED __attribute__((ns_returns_not_retained))
  #else
    #define NS_RETURNS_NOT_RETAINED
  #endif
#endif


@interface PaperPostRoot : NSObject {
}
+ (PBExtensionRegistry*) extensionRegistry;
+ (void) registerAllExtensions:(PBMutableExtensionRegistry*) registry;
@end

@interface PaperPost : PBGeneratedMessage {
@private
  BOOL hasId_:1;
  BOOL hasContent_:1;
  BOOL hasCreateDate_:1;
  BOOL hasUser_:1;
  BOOL hasPaperTemplate_:1;
  BOOL hasLocation_:1;
  BOOL hasCompany_:1;
  int32_t id;
  NSString* content;
  NSString* createDate;
  User* user;
  PaperTemplate* paperTemplate;
  Location* location;
  Company* company;
  PBAppendableArray * paperPostMediasArray;
}
- (BOOL) hasId;
- (BOOL) hasUser;
- (BOOL) hasPaperTemplate;
- (BOOL) hasLocation;
- (BOOL) hasContent;
- (BOOL) hasCompany;
- (BOOL) hasCreateDate;
@property (readonly) int32_t id;
@property (readonly, retain) User* user;
@property (readonly, retain) PaperTemplate* paperTemplate;
@property (readonly, retain) Location* location;
@property (readonly, retain) NSString* content;
@property (readonly, retain) PBArray * paperPostMedias;
@property (readonly, retain) Company* company;
@property (readonly, retain) NSString* createDate;
- (PaperPostMedia*)paperPostMediasAtIndex:(NSUInteger)index;

+ (PaperPost*) defaultInstance;
- (PaperPost*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (PaperPost_Builder*) builder;
+ (PaperPost_Builder*) builder;
+ (PaperPost_Builder*) builderWithPrototype:(PaperPost*) prototype;
- (PaperPost_Builder*) toBuilder;

+ (PaperPost*) parseFromData:(NSData*) data;
+ (PaperPost*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (PaperPost*) parseFromInputStream:(NSInputStream*) input;
+ (PaperPost*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (PaperPost*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (PaperPost*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface PaperPost_Builder : PBGeneratedMessage_Builder {
@private
  PaperPost* result;
}

- (PaperPost*) defaultInstance;

- (PaperPost_Builder*) clear;
- (PaperPost_Builder*) clone;

- (PaperPost*) build;
- (PaperPost*) buildPartial;

- (PaperPost_Builder*) mergeFrom:(PaperPost*) other;
- (PaperPost_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (PaperPost_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasId;
- (int32_t) id;
- (PaperPost_Builder*) setId:(int32_t) value;
- (PaperPost_Builder*) clearId;

- (BOOL) hasUser;
- (User*) user;
- (PaperPost_Builder*) setUser:(User*) value;
- (PaperPost_Builder*) setUserBuilder:(User_Builder*) builderForValue;
- (PaperPost_Builder*) mergeUser:(User*) value;
- (PaperPost_Builder*) clearUser;

- (BOOL) hasPaperTemplate;
- (PaperTemplate*) paperTemplate;
- (PaperPost_Builder*) setPaperTemplate:(PaperTemplate*) value;
- (PaperPost_Builder*) setPaperTemplateBuilder:(PaperTemplate_Builder*) builderForValue;
- (PaperPost_Builder*) mergePaperTemplate:(PaperTemplate*) value;
- (PaperPost_Builder*) clearPaperTemplate;

- (BOOL) hasLocation;
- (Location*) location;
- (PaperPost_Builder*) setLocation:(Location*) value;
- (PaperPost_Builder*) setLocationBuilder:(Location_Builder*) builderForValue;
- (PaperPost_Builder*) mergeLocation:(Location*) value;
- (PaperPost_Builder*) clearLocation;

- (BOOL) hasContent;
- (NSString*) content;
- (PaperPost_Builder*) setContent:(NSString*) value;
- (PaperPost_Builder*) clearContent;

- (PBAppendableArray *)paperPostMedias;
- (PaperPostMedia*)paperPostMediasAtIndex:(NSUInteger)index;
- (PaperPost_Builder *)addPaperPostMedias:(PaperPostMedia*)value;
- (PaperPost_Builder *)setPaperPostMediasArray:(NSArray *)array;
- (PaperPost_Builder *)setPaperPostMediasValues:(const PaperPostMedia* *)values count:(NSUInteger)count;
- (PaperPost_Builder *)clearPaperPostMedias;

- (BOOL) hasCompany;
- (Company*) company;
- (PaperPost_Builder*) setCompany:(Company*) value;
- (PaperPost_Builder*) setCompanyBuilder:(Company_Builder*) builderForValue;
- (PaperPost_Builder*) mergeCompany:(Company*) value;
- (PaperPost_Builder*) clearCompany;

- (BOOL) hasCreateDate;
- (NSString*) createDate;
- (PaperPost_Builder*) setCreateDate:(NSString*) value;
- (PaperPost_Builder*) clearCreateDate;
@end

@interface PaperPostMedia : PBGeneratedMessage {
@private
  BOOL hasFieldId_:1;
  NSString* fieldId;
  PBAppendableArray * filesArray;
}
- (BOOL) hasFieldId;
@property (readonly, retain) NSString* fieldId;
@property (readonly, retain) PBArray * files;
- (NSData*)filesAtIndex:(NSUInteger)index;

+ (PaperPostMedia*) defaultInstance;
- (PaperPostMedia*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (PaperPostMedia_Builder*) builder;
+ (PaperPostMedia_Builder*) builder;
+ (PaperPostMedia_Builder*) builderWithPrototype:(PaperPostMedia*) prototype;
- (PaperPostMedia_Builder*) toBuilder;

+ (PaperPostMedia*) parseFromData:(NSData*) data;
+ (PaperPostMedia*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (PaperPostMedia*) parseFromInputStream:(NSInputStream*) input;
+ (PaperPostMedia*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (PaperPostMedia*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (PaperPostMedia*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface PaperPostMedia_Builder : PBGeneratedMessage_Builder {
@private
  PaperPostMedia* result;
}

- (PaperPostMedia*) defaultInstance;

- (PaperPostMedia_Builder*) clear;
- (PaperPostMedia_Builder*) clone;

- (PaperPostMedia*) build;
- (PaperPostMedia*) buildPartial;

- (PaperPostMedia_Builder*) mergeFrom:(PaperPostMedia*) other;
- (PaperPostMedia_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (PaperPostMedia_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasFieldId;
- (NSString*) fieldId;
- (PaperPostMedia_Builder*) setFieldId:(NSString*) value;
- (PaperPostMedia_Builder*) clearFieldId;

- (PBAppendableArray *)files;
- (NSData*)filesAtIndex:(NSUInteger)index;
- (PaperPostMedia_Builder *)addFiles:(NSData*)value;
- (PaperPostMedia_Builder *)setFilesArray:(NSArray *)array;
- (PaperPostMedia_Builder *)setFilesValues:(const NSData* *)values count:(NSUInteger)count;
- (PaperPostMedia_Builder *)clearFiles;
@end

@interface PagePaperPost : PBGeneratedMessage {
@private
  BOOL hasPage_:1;
  Pagination* page;
  PBAppendableArray * paperPostsArray;
}
- (BOOL) hasPage;
@property (readonly, retain) Pagination* page;
@property (readonly, retain) PBArray * paperPosts;
- (PaperPost*)paperPostsAtIndex:(NSUInteger)index;

+ (PagePaperPost*) defaultInstance;
- (PagePaperPost*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (PagePaperPost_Builder*) builder;
+ (PagePaperPost_Builder*) builder;
+ (PagePaperPost_Builder*) builderWithPrototype:(PagePaperPost*) prototype;
- (PagePaperPost_Builder*) toBuilder;

+ (PagePaperPost*) parseFromData:(NSData*) data;
+ (PagePaperPost*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (PagePaperPost*) parseFromInputStream:(NSInputStream*) input;
+ (PagePaperPost*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (PagePaperPost*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (PagePaperPost*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface PagePaperPost_Builder : PBGeneratedMessage_Builder {
@private
  PagePaperPost* result;
}

- (PagePaperPost*) defaultInstance;

- (PagePaperPost_Builder*) clear;
- (PagePaperPost_Builder*) clone;

- (PagePaperPost*) build;
- (PagePaperPost*) buildPartial;

- (PagePaperPost_Builder*) mergeFrom:(PagePaperPost*) other;
- (PagePaperPost_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (PagePaperPost_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasPage;
- (Pagination*) page;
- (PagePaperPost_Builder*) setPage:(Pagination*) value;
- (PagePaperPost_Builder*) setPageBuilder:(Pagination_Builder*) builderForValue;
- (PagePaperPost_Builder*) mergePage:(Pagination*) value;
- (PagePaperPost_Builder*) clearPage;

- (PBAppendableArray *)paperPosts;
- (PaperPost*)paperPostsAtIndex:(NSUInteger)index;
- (PagePaperPost_Builder *)addPaperPosts:(PaperPost*)value;
- (PagePaperPost_Builder *)setPaperPostsArray:(NSArray *)array;
- (PagePaperPost_Builder *)setPaperPostsValues:(const PaperPost* *)values count:(NSUInteger)count;
- (PagePaperPost_Builder *)clearPaperPosts;
@end

@interface PaperPostParams : PBGeneratedMessage {
@private
  BOOL hasPage_:1;
  BOOL hasId_:1;
  BOOL hasStartDate_:1;
  BOOL hasEndDate_:1;
  BOOL hasPaperTemplate_:1;
  int32_t page;
  int32_t id;
  NSString* startDate;
  NSString* endDate;
  PaperTemplate* paperTemplate;
  PBAppendableArray * usersArray;
  PBAppendableArray * departmentsArray;
}
- (BOOL) hasPage;
- (BOOL) hasStartDate;
- (BOOL) hasEndDate;
- (BOOL) hasId;
- (BOOL) hasPaperTemplate;
@property (readonly) int32_t page;
@property (readonly, retain) PBArray * users;
@property (readonly, retain) NSString* startDate;
@property (readonly, retain) NSString* endDate;
@property (readonly) int32_t id;
@property (readonly, retain) PBArray * departments;
@property (readonly, retain) PaperTemplate* paperTemplate;
- (User*)usersAtIndex:(NSUInteger)index;
- (Department*)departmentsAtIndex:(NSUInteger)index;

+ (PaperPostParams*) defaultInstance;
- (PaperPostParams*) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (PaperPostParams_Builder*) builder;
+ (PaperPostParams_Builder*) builder;
+ (PaperPostParams_Builder*) builderWithPrototype:(PaperPostParams*) prototype;
- (PaperPostParams_Builder*) toBuilder;

+ (PaperPostParams*) parseFromData:(NSData*) data;
+ (PaperPostParams*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (PaperPostParams*) parseFromInputStream:(NSInputStream*) input;
+ (PaperPostParams*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (PaperPostParams*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (PaperPostParams*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface PaperPostParams_Builder : PBGeneratedMessage_Builder {
@private
  PaperPostParams* result;
}

- (PaperPostParams*) defaultInstance;

- (PaperPostParams_Builder*) clear;
- (PaperPostParams_Builder*) clone;

- (PaperPostParams*) build;
- (PaperPostParams*) buildPartial;

- (PaperPostParams_Builder*) mergeFrom:(PaperPostParams*) other;
- (PaperPostParams_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (PaperPostParams_Builder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasPage;
- (int32_t) page;
- (PaperPostParams_Builder*) setPage:(int32_t) value;
- (PaperPostParams_Builder*) clearPage;

- (PBAppendableArray *)users;
- (User*)usersAtIndex:(NSUInteger)index;
- (PaperPostParams_Builder *)addUsers:(User*)value;
- (PaperPostParams_Builder *)setUsersArray:(NSArray *)array;
- (PaperPostParams_Builder *)setUsersValues:(const User* *)values count:(NSUInteger)count;
- (PaperPostParams_Builder *)clearUsers;

- (BOOL) hasStartDate;
- (NSString*) startDate;
- (PaperPostParams_Builder*) setStartDate:(NSString*) value;
- (PaperPostParams_Builder*) clearStartDate;

- (BOOL) hasEndDate;
- (NSString*) endDate;
- (PaperPostParams_Builder*) setEndDate:(NSString*) value;
- (PaperPostParams_Builder*) clearEndDate;

- (BOOL) hasId;
- (int32_t) id;
- (PaperPostParams_Builder*) setId:(int32_t) value;
- (PaperPostParams_Builder*) clearId;

- (PBAppendableArray *)departments;
- (Department*)departmentsAtIndex:(NSUInteger)index;
- (PaperPostParams_Builder *)addDepartments:(Department*)value;
- (PaperPostParams_Builder *)setDepartmentsArray:(NSArray *)array;
- (PaperPostParams_Builder *)setDepartmentsValues:(const Department* *)values count:(NSUInteger)count;
- (PaperPostParams_Builder *)clearDepartments;

- (BOOL) hasPaperTemplate;
- (PaperTemplate*) paperTemplate;
- (PaperPostParams_Builder*) setPaperTemplate:(PaperTemplate*) value;
- (PaperPostParams_Builder*) setPaperTemplateBuilder:(PaperTemplate_Builder*) builderForValue;
- (PaperPostParams_Builder*) mergePaperTemplate:(PaperTemplate*) value;
- (PaperPostParams_Builder*) clearPaperTemplate;
@end
