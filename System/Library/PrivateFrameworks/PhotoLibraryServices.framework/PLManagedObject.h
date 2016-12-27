/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class PLPhotoLibrary, NSString;

@interface PLManagedObject : NSManagedObject

@property (nonatomic,retain,readonly) PLPhotoLibrary * photoLibrary; 
@property (nonatomic,readonly) BOOL isRegisteredWithUserInterfaceContext; 
@property (nonatomic,copy,readonly) NSString * shortObjectIDURI; 
@property (nonatomic,copy,readonly) NSString * pl_shortDescription; 
-(BOOL)supportsCloudUpload;
-(void)willSave;
-(BOOL)isRegisteredWithUserInterfaceContext;
-(BOOL)isSyncableChange;
-(NSString *)pl_shortDescription;
-(NSString *)shortObjectIDURI;
-(PLPhotoLibrary *)photoLibrary;
@end

