/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIViewController, MCDPCContainer, MCDPCItem, NSIndexPath, MPWeakTimer;

@interface _MCDBrowsableContentTableViewPreloader : NSObject {

	BOOL _cancelled;
	BOOL _isRootTableView;
	BOOL _isTabbedBrowsing;
	UIViewController* _sourceViewController;
	MCDPCContainer* _container;
	MCDPCItem* _item;
	long long _index;
	NSIndexPath* _indexPath;
	/*^block*/id _cancelledBlock;
	MPWeakTimer* _loadingTimer;

}

@property (assign,getter=isCancelled,nonatomic) BOOL cancelled;                             //@synthesize cancelled=_cancelled - In the implementation block
@property (nonatomic,__weak,readonly) UIViewController * sourceViewController;              //@synthesize sourceViewController=_sourceViewController - In the implementation block
@property (nonatomic,readonly) MCDPCContainer * container;                                  //@synthesize container=_container - In the implementation block
@property (nonatomic,readonly) MCDPCItem * item;                                            //@synthesize item=_item - In the implementation block
@property (nonatomic,readonly) long long index;                                             //@synthesize index=_index - In the implementation block
@property (assign,nonatomic) BOOL isRootTableView;                                          //@synthesize isRootTableView=_isRootTableView - In the implementation block
@property (assign,nonatomic) BOOL isTabbedBrowsing;                                         //@synthesize isTabbedBrowsing=_isTabbedBrowsing - In the implementation block
@property (nonatomic,readonly) NSIndexPath * indexPath;                                     //@synthesize indexPath=_indexPath - In the implementation block
@property (nonatomic,copy,readonly) id cancelledBlock;                                      //@synthesize cancelledBlock=_cancelledBlock - In the implementation block
@property (nonatomic,retain) MPWeakTimer * loadingTimer;                                    //@synthesize loadingTimer=_loadingTimer - In the implementation block
-(void)dealloc;
-(id)description;
-(MCDPCItem *)item;
-(NSIndexPath *)indexPath;
-(MCDPCContainer *)container;
-(BOOL)isCancelled;
-(void)setCancelled:(BOOL)arg1 ;
-(UIViewController *)sourceViewController;
-(long long)index;
-(id)initWithContainer:(id)arg1 index:(long long)arg2 sourceViewController:(id)arg3 rootTableView:(BOOL)arg4 tabbedBrowsing:(BOOL)arg5 cancelledBlock:(/*^block*/id)arg6 ;
-(void)loadAndPush;
-(void)_deregister;
-(void)_displayErrorAlertController:(id)arg1 ;
-(void)_pushToPlayback:(id)arg1 ;
-(void)_loadContainerAndPush:(id)arg1 ;
-(BOOL)isRootTableView;
-(void)setIsRootTableView:(BOOL)arg1 ;
-(BOOL)isTabbedBrowsing;
-(void)setIsTabbedBrowsing:(BOOL)arg1 ;
-(id)cancelledBlock;
-(MPWeakTimer *)loadingTimer;
-(void)setLoadingTimer:(MPWeakTimer *)arg1 ;
@end

