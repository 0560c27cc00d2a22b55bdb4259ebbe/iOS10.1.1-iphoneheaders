/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:31 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>
#import <libobjc.A.dylib/BLTSectionInfoObserverDelegate.h>
#import <libobjc.A.dylib/BLTSectionInfoListProvider.h>

@protocol OS_dispatch_queue, BLTSectionInfoListProviderDelegate;
@class BLTSectionInfoObserver, LSApplicationWorkspace, NSObject, NSString;

@interface BLTSectionInfoListBBProvider : NSObject <LSApplicationWorkspaceObserverProtocol, BLTSectionInfoObserverDelegate, BLTSectionInfoListProvider> {

	BLTSectionInfoObserver* _observer;
	LSApplicationWorkspace* _appWorkspace;
	NSObject*<OS_dispatch_queue> _queue;
	id<BLTSectionInfoListProviderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<BLTSectionInfoListProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setDelegate:(id<BLTSectionInfoListProviderDelegate>)arg1 ;
-(void)dealloc;
-(id<BLTSectionInfoListProviderDelegate>)delegate;
-(void)applicationsDidInstall:(id)arg1 ;
-(void)applicationsDidUninstall:(id)arg1 ;
-(void)reloadWithCompletion:(/*^block*/id)arg1 ;
-(void)sectionInfoObserver:(id)arg1 updatedSectionInfo:(id)arg2 withUniversalSectionID:(id)arg3 displayName:(id)arg4 ;
-(void)sectionInfoObserver:(id)arg1 removedSectionWithSectionID:(id)arg2 ;
@end

