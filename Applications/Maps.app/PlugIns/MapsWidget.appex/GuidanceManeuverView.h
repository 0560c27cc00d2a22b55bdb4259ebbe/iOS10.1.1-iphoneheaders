/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:19 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/Maps.app/PlugIns/MapsWidget.appex/MapsWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsWidget/MapsWidget-Structs.h>
#import <UIKit/UIView.h>

@protocol GuidanceManeuverViewTextureProvider, GuidanceManeuverViewDelegate;
@class MKJunction, UIColor, UIBezierPath, NSArray;

@interface GuidanceManeuverView : UIView {

	BOOL _disallowMutation;
	BOOL _alerting;
	BOOL _disallowManeuversWithoutArt;
	MKJunction* _junction;
	int _maneuver;
	int _drivingSide;
	id<GuidanceManeuverViewTextureProvider> _textureProvider;
	int _framing;
	UIColor* _arrowColor;
	UIColor* _accentColor;
	UIBezierPath* _arrowPath;
	UIBezierPath* _arrowStrokePath;
	UIBezierPath* _intersectionFillPath;
	UIBezierPath* _intersectionStrokePath;
	NSArray* _arrivalCircles;
	double _visibleWidth;
	double _accentStrokeAlpha;
	double _accentFillAlpha;
	id<GuidanceManeuverViewDelegate> _delegate;
	SCD_Struct_Gu1 _arrowMetrics;

}

@property (assign,nonatomic) int maneuver;                                                  //@synthesize maneuver=_maneuver - In the implementation block
@property (nonatomic,readonly) int displayManeuver; 
@property (assign,nonatomic) int drivingSide;                                               //@synthesize drivingSide=_drivingSide - In the implementation block
@property (nonatomic,retain) MKJunction * junction;                                         //@synthesize junction=_junction - In the implementation block
@property (assign,nonatomic) SCD_Struct_Gu2 arrowMetrics;                                   //@synthesize arrowMetrics=_arrowMetrics - In the implementation block
@property (assign,nonatomic) int framing;                                                   //@synthesize framing=_framing - In the implementation block
@property (nonatomic,retain) UIColor * arrowColor;                                          //@synthesize arrowColor=_arrowColor - In the implementation block
@property (nonatomic,retain) UIColor * accentColor;                                         //@synthesize accentColor=_accentColor - In the implementation block
@property (assign,nonatomic) double accentFillAlpha;                                        //@synthesize accentFillAlpha=_accentFillAlpha - In the implementation block
@property (assign,nonatomic) double accentStrokeAlpha;                                      //@synthesize accentStrokeAlpha=_accentStrokeAlpha - In the implementation block
@property (assign,nonatomic) BOOL disallowManeuversWithoutArt;                              //@synthesize disallowManeuversWithoutArt=_disallowManeuversWithoutArt - In the implementation block
@property (assign,nonatomic,__weak) id<GuidanceManeuverViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithFrame:(CGRect)arg1 textureProvider:(id)arg2 ;
-(BOOL)_maneuverIsDrawnByDrawRect;
-(void)drawIntersectionFill:(id)arg1 ;
-(void)drawIntersectionStroke:(id)arg1 forFill:(id)arg2 ;
-(void)drawArrow:(id)arg1 stroke:(id)arg2 ;
-(CGAffineTransform)transformForDrawingPathsWithFrame:(CGRect)arg1 relativeToReferenceSize:(CGSize)arg2 ;
-(void)drawArrow:(id)arg1 stroke:(id)arg2 withVisibleWidth:(double)arg3 intersectionFillPath:(id)arg4 intersectionStrokePath:(id)arg5 referenceSize:(CGSize)arg6 ;
-(void)_updateDrawingPaths;
-(void)_updateDrawingPathsForArrival;
-(void)_updateDrawingPathsForProceedToRoute;
-(void)_updateDrawingPathsFromJunction;
-(void)_drawDefaultPaths;
-(void)_drawArrival;
-(void)_drawProceedToRoute;
-(void)_invalidateDrawingPaths;
-(void)setAccentStrokeAlpha:(double)arg1 ;
-(void)setAccentFillAlpha:(double)arg1 ;
-(int)displayManeuver;
-(void)setJunction:(MKJunction *)arg1 ;
-(void)disallowMutation;
-(void)setFraming:(int)arg1 ;
-(void)setArrowMetrics:(SCD_Struct_Gu2)arg1 ;
-(SCD_Struct_Gu2)arrowMetrics;
-(BOOL)disallowManeuversWithoutArt;
-(void)setDisallowManeuversWithoutArt:(BOOL)arg1 ;
-(int)framing;
-(double)accentStrokeAlpha;
-(double)accentFillAlpha;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setDelegate:(id<GuidanceManeuverViewDelegate>)arg1 ;
-(void)didMoveToWindow;
-(void)setBounds:(CGRect)arg1 ;
-(id<GuidanceManeuverViewDelegate>)delegate;
-(CGSize)intrinsicContentSize;
-(int)drivingSide;
-(void)setDrivingSide:(int)arg1 ;
-(int)maneuver;
-(MKJunction *)junction;
-(void)setManeuver:(int)arg1 ;
-(id)imageRepresentation;
-(void)setAccentColor:(UIColor *)arg1 ;
-(UIColor *)accentColor;
-(UIColor *)arrowColor;
-(void)setArrowColor:(UIColor *)arg1 ;
@end

