/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:04 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BRCModule.h>
#import <libobjc.A.dylib/BRCRecentDocumentsNotificationDelegate.h>

@protocol OS_dispatch_queue, BRCIndexingArbiter;
@class BRCAccountSession, SBSApplicationShortcutService, NSObject, br_pacer, NSOperationQueue, NSString;

@interface BRCApplicationShortcutService : NSObject <BRCModule, BRCRecentDocumentsNotificationDelegate> {

	BRCAccountSession* _session;
	SBSApplicationShortcutService* _shortcutService;
	NSObject*<OS_dispatch_queue> _shortcutServiceQueue;
	br_pacer* _pacer;
	NSOperationQueue* _thumbnailQueue;
	id<BRCIndexingArbiter> _indexingArbiter;

}

@property (assign,nonatomic,__weak) id<BRCIndexingArbiter> indexingArbiter;              //@synthesize indexingArbiter=_indexingArbiter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isCancelled; 
+(int)_bestIconVariantForDeviceMainScreen;
-(void)cancel;
-(void)dealloc;
-(BOOL)isCancelled;
-(void)resume;
-(void)close;
-(id)initWithAccountSession:(id)arg1 ;
-(void)recentDocumentsListUpdated;
-(id<BRCIndexingArbiter>)indexingArbiter;
-(void)setIndexingArbiter:(id<BRCIndexingArbiter>)arg1 ;
-(void)_updateShortcuts;
-(id)_recentDocumentDescriptors;
-(id)_shortcutItemForRecentItemDescriptor:(id)arg1 ;
-(id)_searchShortcutItem;
-(id)_previewImageDataForDocumentAtURL:(id)arg1 dataType:(long long*)arg2 ;
@end

