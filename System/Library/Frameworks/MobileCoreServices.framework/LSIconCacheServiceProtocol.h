/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:26 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol LSIconCacheServiceProtocol <NSObject>
@required
-(void)copyIconBitmapCacheConfigurationWithReply:(/*^block*/id)arg1;
-(void)getIconBitmapDataWithResourceDirectoryURL:(id)arg1 bundleIdentifier:(id)arg2 roleIdentifier:(id)arg3 iconFiles:(id)arg4 variant:(int)arg5 options:(int)arg6 reply:(/*^block*/id)arg7;
-(void)getIconBitmapDataWithResourceDirectoryURL:(id)arg1 boundContainerURL:(id)arg2 dataContainerURL:(id)arg3 bundleIdentifier:(id)arg4 iconsDictionary:(id)arg5 cacheFileName:(id)arg6 variant:(int)arg7 reply:(/*^block*/id)arg8;
-(void)invalidateItemsForBundeID:(id)arg1 reply:(/*^block*/id)arg2;

@end

