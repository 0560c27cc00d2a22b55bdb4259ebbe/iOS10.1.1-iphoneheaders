/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSURL, SSUpdatableAssetCacheManager, NSString;

@interface UpdateAssetsOperation : ISOperation {

	NSURL* _bundledManifestURL;
	SSUpdatableAssetCacheManager* _cacheManager;
	/*^block*/id _completion;
	NSURL* _manifestURL;
	NSString* _previousLastModified;
	BOOL _scheduledInBackground;
	NSString* _userAgent;

}
-(id)_downloadRemoteFile:(id)arg1 toLocalPath:(id)arg2 expectedMD5:(id)arg3 ifModifiedSince:(id)arg4 error:(id*)arg5 ;
-(id)_uncachedAssetsForManifest:(id)arg1 ;
-(id)_allCachedAssetFileNames;
-(id)initWithManifestURL:(id)arg1 bundledManifestURL:(id)arg2 clientIdentifier:(id)arg3 userAgent:(id)arg4 scheduledInBackground:(BOOL)arg5 previousLastModified:(id)arg6 completion:(/*^block*/id)arg7 ;
-(id)_bundledManifest;
-(void)run;
@end

