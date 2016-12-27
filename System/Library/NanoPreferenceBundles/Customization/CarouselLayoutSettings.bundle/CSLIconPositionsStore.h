/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:35 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/NanoPreferenceBundles/Customization/CarouselLayoutSettings.bundle/CarouselLayoutSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CSLIconPostionsStoreDelegate;
@class NPSManager;

@interface CSLIconPositionsStore : NSObject {

	NPSManager* _syncManager;
	BOOL _initialSyncComplete;
	id<CSLIconPostionsStoreDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CSLIconPostionsStoreDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_saveLocalPositions:(id)arg1 usingKey:(id)arg2 ;
-(void)actionsOnInitialSyncComplete;
-(void)saveTargetPositions:(id)arg1 ;
-(id)loadTargetPositions;
-(id)loadPositions;
-(id)_loadLocalPositionsUsingKey:(id)arg1 ;
-(void)_savePositions:(id)arg1 usingKey:(id)arg2 ;
-(id)_loadPositionsUsingKey:(id)arg1 ;
-(id)loadDefaultPositions;
-(void)positionsChanged;
-(void)savePositions:(id)arg1 ;
-(void)initialSyncComplete;
-(id)init;
-(void)setDelegate:(id<CSLIconPostionsStoreDelegate>)arg1 ;
-(void)dealloc;
-(id<CSLIconPostionsStoreDelegate>)delegate;
@end

