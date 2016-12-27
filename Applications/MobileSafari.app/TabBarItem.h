/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, TabBar, TabBarItemLayoutInfo;

@interface TabBarItem : NSObject {

	BOOL _active;
	BOOL _isPlaceholder;
	NSString* _title;
	TabBar* _tabBar;
	TabBarItemLayoutInfo* _layoutInfo;

}

@property (nonatomic,retain) TabBar * tabBar;                                //@synthesize tabBar=_tabBar - In the implementation block
@property (nonatomic,retain) TabBarItemLayoutInfo * layoutInfo;              //@synthesize layoutInfo=_layoutInfo - In the implementation block
@property (nonatomic,copy) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;                    //@synthesize active=_active - In the implementation block
@property (assign,nonatomic) BOOL isPlaceholder;                             //@synthesize isPlaceholder=_isPlaceholder - In the implementation block
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isActive;
-(NSString *)title;
-(TabBar *)tabBar;
-(void)setTabBar:(TabBar *)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(TabBarItemLayoutInfo *)layoutInfo;
-(void)setLayoutInfo:(TabBarItemLayoutInfo *)arg1 ;
-(BOOL)isPlaceholder;
-(void)setIsPlaceholder:(BOOL)arg1 ;
@end

