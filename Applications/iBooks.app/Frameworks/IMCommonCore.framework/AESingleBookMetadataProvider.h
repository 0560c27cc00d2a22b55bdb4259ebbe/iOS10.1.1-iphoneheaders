/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:32 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/iBooks.app/Frameworks/IMCommonCore.framework/IMCommonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCommonCore/AEBookMetadataProvider.h>

@class NSString, NSURL;

@interface AESingleBookMetadataProvider : NSObject <AEBookMetadataProvider> {

	BOOL managedBook;
	NSString* assetID;
	NSURL* assetURL;
	NSString* bookVersionString;
	NSString* pathToAssetContextDirectory;

}

@property (nonatomic,retain) NSString * assetID; 
@property (nonatomic,retain) NSURL * assetURL; 
@property (nonatomic,retain) NSString * bookVersionString; 
@property (nonatomic,retain) NSString * pathToAssetContextDirectory; 
@property (assign,getter=isManagedBook,nonatomic) BOOL managedBook; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)singleBookMetadataProviderWithAssetID:(id)arg1 assetURL:(id)arg2 bookVersionString:(id)arg3 pathToAssetContextDirectory:(id)arg4 isManagedBook:(BOOL)arg5 ;
-(BOOL)isManagedBook;
-(BOOL)isManagedWithAssetID:(id)arg1 ;
-(id)assetURLForAssetID:(id)arg1 ;
-(id)pathToContextDirectoryForAssetID:(id)arg1 ;
-(id)bookVersionStringForAssetID:(id)arg1 ;
-(id)initWithAssetID:(id)arg1 assetURL:(id)arg2 bookVersionString:(id)arg3 pathToAssetContextDirectory:(id)arg4 isManagedBook:(BOOL)arg5 ;
-(void)setAssetID:(NSString *)arg1 ;
-(void)setBookVersionString:(NSString *)arg1 ;
-(void)setPathToAssetContextDirectory:(NSString *)arg1 ;
-(NSString *)bookVersionString;
-(NSString *)pathToAssetContextDirectory;
-(void)setAssetURL:(NSURL *)arg1 ;
-(NSString *)description;
-(NSURL *)assetURL;
-(void)setManagedBook:(BOOL)arg1 ;
-(NSString *)assetID;
@end

