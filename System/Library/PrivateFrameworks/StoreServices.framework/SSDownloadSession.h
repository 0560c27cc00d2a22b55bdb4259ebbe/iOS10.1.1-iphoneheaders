/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:38:25 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class SSXPCConnection, NSObject, SSDownload, SSDownloadAsset;

@interface SSDownloadSession : NSObject {

	SSXPCConnection* _controlConnection;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	long long _sessionID;
	long long _assetID;
	long long _downloadID;

}

@property (readonly) SSDownload * download; 
@property (readonly) SSDownloadAsset * downloadAsset; 
-(id)_initWithMessage:(id)arg1 controlConnection:(id)arg2 ;
-(id)_initSSDownloadSession;
-(id)_copySessionPropertyWithKey:(const char*)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(SSDownloadAsset *)downloadAsset;
-(SSDownload *)download;
@end

