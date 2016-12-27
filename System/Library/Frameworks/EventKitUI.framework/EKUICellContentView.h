/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:43 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UIView.h>

@class UIVisualEffectView, EKUICellRowSeparatorView, UIColor, UIVisualEffect;

@interface EKUICellContentView : UIView {

	UIVisualEffectView* _rowSeparatorParentView;
	EKUICellRowSeparatorView* _separatorViewForNonOpaqueContainers;
	BOOL _drawsOwnRowSeparators;
	BOOL _usesInsetMargin;
	UIColor* _rowSeparatorColor;
	UIVisualEffect* _rowSeparatorVisualEffect;
	UIEdgeInsets _separatorInset;

}

@property (assign,nonatomic) UIEdgeInsets separatorInset;                            //@synthesize separatorInset=_separatorInset - In the implementation block
@property (assign,nonatomic) BOOL drawsOwnRowSeparators;                             //@synthesize drawsOwnRowSeparators=_drawsOwnRowSeparators - In the implementation block
@property (nonatomic,retain) UIColor * rowSeparatorColor;                            //@synthesize rowSeparatorColor=_rowSeparatorColor - In the implementation block
@property (nonatomic,retain) UIVisualEffect * rowSeparatorVisualEffect;              //@synthesize rowSeparatorVisualEffect=_rowSeparatorVisualEffect - In the implementation block
@property (assign,nonatomic) BOOL usesInsetMargin;                                   //@synthesize usesInsetMargin=_usesInsetMargin - In the implementation block
+(BOOL)vibrant;
+(double)rowSeparatorThickness;
-(void)layoutSubviews;
-(void)_setMarginWidth:(double)arg1 ;
-(void)setSeparatorInset:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)separatorInset;
-(void)setDrawsOwnRowSeparators:(BOOL)arg1 ;
-(BOOL)drawsOwnRowSeparators;
-(void)setRowSeparatorColor:(UIColor *)arg1 ;
-(void)setUsesInsetMargin:(BOOL)arg1 ;
-(void)_layoutSeparator;
-(BOOL)usesInsetMargin;
-(void)_setMarginExtendsToFullWidth:(BOOL)arg1 ;
-(UIVisualEffect *)rowSeparatorVisualEffect;
-(UIColor *)rowSeparatorColor;
-(void)setRowSeparatorVisualEffect:(UIVisualEffect *)arg1 ;
@end

