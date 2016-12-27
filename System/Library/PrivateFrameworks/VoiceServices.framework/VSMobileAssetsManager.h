/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface VSMobileAssetsManager : NSObject {

	NSObject*<OS_dispatch_queue> _cacheConcurrentQueue;
	NSMutableDictionary* _voiceSelectionCache;
	NSMutableDictionary* _voiceResourceCache;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> cacheConcurrentQueue;              //@synthesize cacheConcurrentQueue=_cacheConcurrentQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * voiceSelectionCache;                      //@synthesize voiceSelectionCache=_voiceSelectionCache - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * voiceResourceCache;                       //@synthesize voiceResourceCache=_voiceResourceCache - In the implementation block
+(void)_reloadAndCacheVoiceAssets;
+(id)queryForType:(long long)arg1 voicename:(id)arg2 language:(id)arg3 gender:(long long)arg4 footprint:(long long)arg5 localOnly:(BOOL)arg6 ;
+(id)voiceDataFromAsset:(id)arg1 ;
+(id)pickCorrectAssetFromLocalAssets:(id)arg1 ;
+(id)legacyLocalVocalizerVoiceAssetForLanguage:(id)arg1 ;
+(id)_nonCacheInstalledAssetsForType:(long long)arg1 voicename:(id)arg2 language:(id)arg3 gender:(long long)arg4 footprint:(long long)arg5 ;
+(void)_reloadAndCacheVoiceResourcesAssets;
+(id)queryForVoiceResourceAsset:(id)arg1 localOnly:(BOOL)arg2 ;
+(id)voiceResourceFromAsset:(id)arg1 ;
+(id)_nonCacheInstalledVoiceResources;
+(id)selectVoiceResourceAssetForLanguage:(id)arg1 ;
+(id)_defaultVoiceSettingsForLanguage:(id)arg1 ;
+(id)bundleIdentifierForVoiceType:(long long)arg1 ;
+(id)_cachedVoiceAssets;
+(id)_cachedVoiceResourcesAssets;
+(void)amendVoiceWithDefaultSettings:(id)arg1 ;
+(id)_builtInVoiceForLanguage:(id)arg1 ;
+(BOOL)isVoiceAssetWellDefined:(id)arg1 ;
+(id)getLatestAssetFromArray:(id)arg1 ;
+(id)selectVoiceForLang:(id)arg1 type:(long long)arg2 gender:(long long)arg3 footprint:(long long)arg4 ;
+(id)installedAssetsForType:(long long)arg1 voicename:(id)arg2 language:(id)arg3 gender:(long long)arg4 footprint:(long long)arg5 ;
+(id)installedVoiceResources;
+(long long)voiceTypeForBundleIdentifier:(id)arg1 ;
+(id)sharedManager;
-(NSMutableDictionary *)voiceSelectionCache;
-(NSMutableDictionary *)voiceResourceCache;
-(id)_cachedVoiceResourcesAssetsForLanguage:(id)arg1 ;
-(id)_cachedVoiceAssetsForLanguage:(id)arg1 type:(long long)arg2 gender:(long long)arg3 footprint:(long long)arg4 ;
-(void)_downloadAsset:(id)arg1 withOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_downloadAsset:(id)arg1 withOptions:(id)arg2 progressHandler:(/*^block*/id)arg3 ;
-(void)downloadVoiceAsset:(id)arg1 useBattery:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeVoiceAsset:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)downloadVoiceAsset:(id)arg1 useBattery:(BOOL)arg2 progressUpdateHandler:(/*^block*/id)arg3 ;
-(void)downloadVoiceResource:(id)arg1 useBattery:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeVoiceResource:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)reinstallVoiceData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cleanUnusedVoiceAssets;
-(void)cleanOldVoiceResources;
-(void)setVoiceSelectionCache:(NSMutableDictionary *)arg1 ;
-(void)setVoiceResourceCache:(NSMutableDictionary *)arg1 ;
-(BOOL)_purgeAsset:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)cacheConcurrentQueue;
-(void)setCacheConcurrentQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

