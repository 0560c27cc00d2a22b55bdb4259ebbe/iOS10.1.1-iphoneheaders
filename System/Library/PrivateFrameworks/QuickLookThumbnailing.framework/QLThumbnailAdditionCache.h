/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:11 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCache;

@interface QLThumbnailAdditionCache : NSObject {

	NSCache* _additionsCache;

}
+(id)sharedInstance;
-(id)init;
-(void)cacheAddition:(id)arg1 forDocumentID:(id)arg2 ;
-(id)thumbnailAdditionForItemAtURL:(id)arg1 error:(id*)arg2 ;
-(void)purgeCachedAdditionForItemAtURL:(id)arg1 ;
@end

