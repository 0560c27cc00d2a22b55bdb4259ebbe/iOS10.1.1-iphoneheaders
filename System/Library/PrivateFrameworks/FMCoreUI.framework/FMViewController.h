/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:53 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/FMCoreUI.framework/FMCoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class NSMutableDictionary, NSMutableSet, NSString;

@interface FMViewController : UIViewController {

	NSMutableDictionary* _kvoObservationTokens;
	NSMutableSet* _notificationTokens;

}

@property (nonatomic,retain) NSMutableDictionary * kvoObservationTokens;              //@synthesize kvoObservationTokens=_kvoObservationTokens - In the implementation block
@property (nonatomic,retain) NSMutableSet * notificationTokens;                       //@synthesize notificationTokens=_notificationTokens - In the implementation block
@property (copy,readonly) NSString * controllerNibName; 
-(id)init;
-(void)dealloc;
-(void)didReceiveMemoryWarning;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)awakeFromNib;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)viewDidLoad;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)performSegueWithIdentifier:(id)arg1 sender:(id)arg2 ;
-(void)removeKVOObservationTokens;
-(void)removeNotificationTokens;
-(NSMutableDictionary *)kvoObservationTokens;
-(void)setKvoObservationTokens:(NSMutableDictionary *)arg1 ;
-(NSMutableSet *)notificationTokens;
-(void)setNotificationTokens:(NSMutableSet *)arg1 ;
-(void)addKVOObservationToken:(id)arg1 forObject:(id)arg2 ;
-(void)addNotificationToken:(id)arg1 ;
-(NSString *)controllerNibName;
-(id)actualNibNameForName:(id)arg1 ;
@end

