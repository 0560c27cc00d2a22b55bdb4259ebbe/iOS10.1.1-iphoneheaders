/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:59 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIColor, UIVisualEffect, UIImage;

@interface UICollectionViewTableLayoutSwipeAction : NSObject <NSCopying> {

	BOOL _resetsSwipedRow;
	long long _style;
	NSString* _title;
	UIColor* _backgroundColor;
	UIVisualEffect* _backgroundEffect;
	UIImage* _icon;
	/*^block*/id _preHandler;
	/*^block*/id _handler;

}

@property (assign,nonatomic) long long style;                              //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) id preHandler;                                  //@synthesize preHandler=_preHandler - In the implementation block
@property (nonatomic,copy) id handler;                                     //@synthesize handler=_handler - In the implementation block
@property (nonatomic,copy) NSString * title;                               //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) UIColor * backgroundColor;                      //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,copy) UIVisualEffect * backgroundEffect;              //@synthesize backgroundEffect=_backgroundEffect - In the implementation block
@property (nonatomic,copy) UIImage * icon;                                 //@synthesize icon=_icon - In the implementation block
@property (assign,nonatomic) BOOL resetsSwipedRow;                         //@synthesize resetsSwipedRow=_resetsSwipedRow - In the implementation block
+(id)actionWithStyle:(long long)arg1 title:(id)arg2 handler:(/*^block*/id)arg3 ;
+(id)swipeActionWithStyle:(long long)arg1 title:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(NSString *)title;
-(long long)style;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(UIVisualEffect *)backgroundEffect;
-(void)setBackgroundEffect:(UIVisualEffect *)arg1 ;
-(void)setIcon:(UIImage *)arg1 ;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(void)setResetsSwipedRow:(BOOL)arg1 ;
-(UIImage *)icon;
-(id)preHandler;
-(void)setPreHandler:(id)arg1 ;
-(BOOL)resetsSwipedRow;
-(void)executePreHandler;
-(void)executeHandlerWithView:(id)arg1 ;
@end

