/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:56 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface ExternalDownloadState : NSObject {

	NSMutableDictionary* _externalAssetValues;
	NSMutableDictionary* _externalDownloadValues;

}
-(void)setValue:(id)arg1 forExternalProperty:(id)arg2 ofDownloadID:(long long)arg3 ;
-(void)removeExternalValuesForDownloadID:(long long)arg1 ;
-(void)removeExternalValuesForAssetID:(long long)arg1 ;
-(id)externalValuesForDownloadID:(long long)arg1 ;
-(id)valueForExternalProperty:(id)arg1 ofAssetID:(long long)arg2 ;
-(id)valueForExternalProperty:(id)arg1 ofDownloadID:(long long)arg2 ;
-(id)_copyValueForEntity:(long long)arg1 property:(id)arg2 dictionary:(id)arg3 ;
-(void)_setValue:(id)arg1 forEntity:(long long)arg2 property:(id)arg3 dictionary:(id)arg4 ;
-(void)_setValues:(id)arg1 forEntity:(long long)arg2 dictionary:(id)arg3 ;
-(id)externalValuesForAssetID:(long long)arg1 ;
-(void)setBytesDownloaded:(long long)arg1 forAssetID:(long long)arg2 ofDownloadID:(long long)arg3 ;
-(void)setBytesUploaded:(long long)arg1 forAssetID:(long long)arg2 ofDownloadID:(long long)arg3 ;
-(void)setExternalValuesWithDictionary:(id)arg1 forAssetID:(long long)arg2 ;
-(void)setExternalValuesWithDictionary:(id)arg1 forDownloadID:(long long)arg2 ;
-(void)setValue:(id)arg1 forExternalProperty:(id)arg2 ofAssetID:(long long)arg3 ;
-(id)init;
-(void)dealloc;
@end

