/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:23 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CoreDAVAccountInfoProvider;
@class NSArray;

@interface CoreDAVRequestLogger : NSObject {

	id<CoreDAVAccountInfoProvider> _provider;
	NSArray* _headerSortDescriptors;
	int _snippetsLogged;

}

@property (nonatomic,retain) NSArray * headerSortDescriptors;              //@synthesize headerSortDescriptors=_headerSortDescriptors - In the implementation block
-(void)dealloc;
-(void)logCoreDAVRequest:(id)arg1 withTaskIdentifier:(id)arg2 ;
-(void)finishCoreDAVResponse;
-(void)logCoreDAVResponseSnippet:(id)arg1 withTaskIdentifier:(id)arg2 isBody:(BOOL)arg3 ;
-(void)logCoreDAVResponseSnippet:(id)arg1 withTaskIdentifier:(id)arg2 ;
-(void)logCoreDAVResponseHeaders:(id)arg1 andStatusCode:(long long)arg2 withTaskIdentifier:(id)arg3 ;
-(void)setHeaderSortDescriptors:(NSArray *)arg1 ;
-(id)_inflateRequestBody:(id)arg1 ;
-(NSArray *)headerSortDescriptors;
-(void)logCoreDAVResponseSnippet:(id)arg1 ;
-(id)initWithProvider:(id)arg1 ;
@end

