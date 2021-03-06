/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSSQLiteEntity.h>

@class NSArray, MediaSocialPostEntity;

@interface DirectUploadEntity : SSSQLiteEntity

@property (nonatomic,readonly) NSArray * artists; 
@property (nonatomic,readonly) MediaSocialPostEntity * postEntity; 
+(id)newEntityValuesWithMediaSocialAttachment:(id)arg1 ;
+(id)databaseTable;
-(MediaSocialPostEntity *)postEntity;
-(void)setProcessingWithResponse:(id)arg1 ;
-(void)resetStatusProperties;
-(id)insertEntitiesForArtists:(id)arg1 withProperties:(id)arg2 ;
-(void)deleteAssetFile;
-(NSArray *)artists;
-(BOOL)deleteFromDatabase;
-(long long)setFailedWithError:(id)arg1 ;
@end

