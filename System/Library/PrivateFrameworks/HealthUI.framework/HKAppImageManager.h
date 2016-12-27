/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>
#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>

@class NSURLSession, NSMapTable, NSMutableDictionary, NSCache, UIImage, NSString;

@interface HKAppImageManager : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate> {

	NSURLSession* _session;
	NSMapTable* _containers;
	NSMutableDictionary* _urlConnections;
	NSCache* _iconCache;
	NSMutableDictionary* _outstandingRequests;

}

@property (retain) NSCache * iconCache;                                    //@synthesize iconCache=_iconCache - In the implementation block
@property (retain) NSMutableDictionary * outstandingRequests;              //@synthesize outstandingRequests=_outstandingRequests - In the implementation block
@property (readonly) UIImage * defaultAppIconTableUI; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedImageManager;
-(id)init;
-(NSMutableDictionary *)outstandingRequests;
-(void)setOutstandingRequests:(NSMutableDictionary *)arg1 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)clearImageCache;
-(void)loadAppImageAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cancelLoadAppImageAtURL:(id)arg1 ;
-(NSCache *)iconCache;
-(void)setIconCache:(NSCache *)arg1 ;
-(BOOL)_fetchIconFromLaunchServicesWithIdentifier:(id)arg1 onCompletion:(/*^block*/id)arg2 ;
-(UIImage *)defaultAppIconTableUI;
-(void)_enqueueRequestForAppIconForIdentifier:(id)arg1 ;
-(id)defaultAppIcon;
-(void)_dispatchResponsesForAppIconForIdentifier:(id)arg1 appImage:(id)arg2 ;
-(void)loadAppIconForIdentifier:(id)arg1 onCompletion:(/*^block*/id)arg2 ;
@end

