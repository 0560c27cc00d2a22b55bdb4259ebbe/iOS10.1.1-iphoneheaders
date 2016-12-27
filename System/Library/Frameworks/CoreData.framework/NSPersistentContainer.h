/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:27 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSManagedObjectContext, NSPersistentStoreCoordinator, NSArray, NSManagedObjectModel;

@interface NSPersistentContainer : NSObject {

	NSString* _name;
	NSManagedObjectContext* _viewContext;
	NSPersistentStoreCoordinator* _storeCoordinator;
	NSArray* _storeDescriptions;

}

@property (copy,readonly) NSString * name;                                                   //@synthesize name=_name - In the implementation block
@property (readonly) NSManagedObjectContext * viewContext;                                   //@synthesize viewContext=_viewContext - In the implementation block
@property (readonly) NSManagedObjectModel * managedObjectModel; 
@property (readonly) NSPersistentStoreCoordinator * persistentStoreCoordinator;              //@synthesize storeCoordinator=_storeCoordinator - In the implementation block
@property (copy) NSArray * persistentStoreDescriptions;                                      //@synthesize storeDescriptions=_storeDescriptions - In the implementation block
+(id)_newModelForName:(id)arg1 ;
+(id)defaultDirectoryURL;
+(id)persistentContainerWithName:(id)arg1 ;
+(id)persistentContainerWithName:(id)arg1 managedObjectModel:(id)arg2 ;
+(id)persistentContainerWithPath:(id)arg1 managedObjectModel:(id)arg2 ;
+(id)persistentContainerWithPath:(id)arg1 ;
+(id)persistentContainerWithPath:(id)arg1 modelNamed:(id)arg2 ;
-(BOOL)load:(id*)arg1 ;
-(id)initWithName:(id)arg1 managedObjectModel:(id)arg2 ;
-(NSArray *)persistentStoreDescriptions;
-(id)newBackgroundContext;
-(void)loadPersistentStoresWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)performBackgroundTask:(/*^block*/id)arg1 ;
-(NSManagedObjectContext *)viewContext;
-(void)setPersistentStoreDescriptions:(NSArray *)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(NSManagedObjectModel *)managedObjectModel;
-(NSPersistentStoreCoordinator *)persistentStoreCoordinator;
@end

