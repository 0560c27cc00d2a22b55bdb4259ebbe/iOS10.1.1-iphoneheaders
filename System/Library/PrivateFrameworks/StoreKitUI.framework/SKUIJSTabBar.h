/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:07 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/SKUIJSTabBar.h>
@class SKUIJSTabBarItem, NSArray;


@protocol SKUIJSTabBar <JSExport>
@property (nonatomic,retain) SKUIJSTabBarItem * selectedTab; 
@property (nonatomic,readonly) NSArray * tabs; 
@property (nonatomic,readonly) SKUIJSTabBarItem * transientTab; 
@required
-(SKUIJSTabBarItem *)transientTab;
-(NSArray *)tabs;
-(SKUIJSTabBarItem *)selectedTab;
-(void)setSelectedTab:(id)arg1;

@end


@class SKUIJSTabBarItem, NSArray, SKUIApplicationController;

@interface SKUIJSTabBar : IKJSObject <SKUIJSTabBar> {

	SKUIApplicationController* _applicationController;
	NSArray* _tabs;
	SKUIJSTabBarItem* _transientTab;

}

@property (nonatomic,retain) SKUIJSTabBarItem * selectedTab; 
@property (nonatomic,readonly) NSArray * tabs;                               //@synthesize tabs=_tabs - In the implementation block
@property (nonatomic,readonly) SKUIJSTabBarItem * transientTab;              //@synthesize transientTab=_transientTab - In the implementation block
-(void)sendOnUpdateWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithAppContext:(id)arg1 controller:(id)arg2 ;
-(SKUIJSTabBarItem *)transientTab;
-(NSArray *)tabs;
-(void)sendOnUpdate;
-(void)sendOnNeedsContentForTabBarItem:(id)arg1 ;
-(void)_reloadTabBarItemsWithPreludeMainThreadWork:(/*^block*/id)arg1 ;
-(id)_selectedTabBarItemForIndex:(long long)arg1 ;
-(SKUIJSTabBarItem *)selectedTab;
-(void)setSelectedTab:(SKUIJSTabBarItem *)arg1 ;
@end

