/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:48:52 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/AccessibilityBundles/GAXBackboardServer.bundle/GAXBackboardServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GAXBackboardServer/GAXBackboardServer-Structs.h>
@class NSMutableArray, AXAccessQueueTimer;

@interface GAXAccessibilityFeatureManager : NSObject {

	BOOL _restoring;
	SCD_Struct_GA0 _overrideAXFeatureSet;
	NSMutableArray* _updateQueue;
	AXAccessQueueTimer* _updateTimer;

}

@property (assign,getter=isRestoring,nonatomic) BOOL restoring;                      //@synthesize restoring=_restoring - In the implementation block
@property (assign,nonatomic) SCD_Struct_GA0 overrideAXFeatureSet;                    //@synthesize overrideAXFeatureSet=_overrideAXFeatureSet - In the implementation block
@property (nonatomic,retain) NSMutableArray * updateQueue;                           //@synthesize updateQueue=_updateQueue - In the implementation block
@property (nonatomic,retain) AXAccessQueueTimer * updateTimer;                       //@synthesize updateTimer=_updateTimer - In the implementation block
@property (nonatomic,readonly) BOOL hasAccessibilityTripleClickOptions; 
-(SCD_Struct_GA0)_loadUserPreferredSet;
-(SCD_Struct_GA0)overrideAXFeatureSet;
-(void)restoreAccessibilityFeatures;
-(void)_saveCurrentFeatureSetAsUserPreferredSet;
-(id)_accessibilityTripleClickOptions;
-(BOOL)_hasSavedUserPreferredFeatures;
-(id)_updateBlocksForFeatureSet:(SCD_Struct_GA0)arg1 ;
-(void)_processNextUpdateBlockInQueue;
-(SCD_Struct_GA0)_currentFeatureSet;
-(BOOL)hasAccessibilityTripleClickOptions;
-(void)overrideAccessibiltyFeaturesWithFeatureSet:(SCD_Struct_GA0)arg1 ;
-(void)setOverrideAXFeatureSet:(SCD_Struct_GA0)arg1 ;
-(id)init;
-(void)dealloc;
-(AXAccessQueueTimer *)updateTimer;
-(void)setUpdateTimer:(AXAccessQueueTimer *)arg1 ;
-(NSMutableArray *)updateQueue;
-(void)setUpdateQueue:(NSMutableArray *)arg1 ;
-(BOOL)isRestoring;
-(void)setRestoring:(BOOL)arg1 ;
@end

