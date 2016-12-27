/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:19 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNUIUserActionItem, NSMutableArray, NSArray;

@interface CNUIUserActionDisambiguationModelFinalizer : NSObject {

	CNUIUserActionItem* _defaultAction;
	NSMutableArray* _actions;
	NSArray* _recentActions;
	NSArray* _directoryServiceActions;
	NSArray* _foundOnDeviceActions;

}

@property (nonatomic,retain) CNUIUserActionItem * defaultAction;              //@synthesize defaultAction=_defaultAction - In the implementation block
@property (nonatomic,retain) NSMutableArray * actions;                        //@synthesize actions=_actions - In the implementation block
@property (nonatomic,retain) NSArray * recentActions;                         //@synthesize recentActions=_recentActions - In the implementation block
@property (nonatomic,retain) NSArray * directoryServiceActions;               //@synthesize directoryServiceActions=_directoryServiceActions - In the implementation block
@property (nonatomic,retain) NSArray * foundOnDeviceActions;                  //@synthesize foundOnDeviceActions=_foundOnDeviceActions - In the implementation block
+(id)modelWithDefaultAction:(id)arg1 actions:(id)arg2 recentActions:(id)arg3 directoryServiceActions:(id)arg4 foundOnDeviceActions:(id)arg5 ;
-(void)setActions:(NSMutableArray *)arg1 ;
-(NSMutableArray *)actions;
-(id)model;
-(CNUIUserActionItem *)defaultAction;
-(void)setDefaultAction:(CNUIUserActionItem *)arg1 ;
-(id)initWithDefaultAction:(id)arg1 actions:(id)arg2 recentActions:(id)arg3 directoryServiceActions:(id)arg4 foundOnDeviceActions:(id)arg5 ;
-(void)removeUninterestingItentActions;
-(void)removeDiscoveredActionsAlreadyCurated;
-(void)promoteLoneManagedCallProviderActionToBeDefault;
-(void)promoteLoneActionToBeDefault;
-(void)removeDefaultActionFromListOfActions;
-(NSArray *)directoryServiceActions;
-(NSArray *)foundOnDeviceActions;
-(NSArray *)recentActions;
-(void)setRecentActions:(NSArray *)arg1 ;
-(void)setDirectoryServiceActions:(NSArray *)arg1 ;
-(void)setFoundOnDeviceActions:(NSArray *)arg1 ;
@end

