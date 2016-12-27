/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:19 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/AccessibilityBundles/VoiceOver.axuiservice/VoiceOver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceOver/VoiceOver-Structs.h>
#import <UIKit/UIView.h>

@class UIImage, MarkerImageView, NSMutableArray;

@interface VOTUIRotorKnob : UIView {

	long long _position;
	long long _count;
	UIImage* _emptyMarkImage;
	UIImage* _selectedMarkImage;
	MarkerImageView* _knobImageView;
	BOOL _lastMovementWasForward;
	BOOL _lastMovementSkippedEmptySpace;
	BOOL _needsLayout;
	NSMutableArray* _markerImageViews;

}

@property (assign,nonatomic) long long count;              //@synthesize count=_count - In the implementation block
-(void)_layoutTrackMarks:(long long)arg1 placements:(double)arg2 ;
-(void)_layoutTrackMarks;
-(CGPoint)_trackPointForPlacement:(double)arg1 ;
-(void)_layoutKnob;
-(void)_updateSelectedMarker;
-(void)_layoutMarkerAtPosition:(CGPoint)arg1 withCircleLocation:(double)arg2 withImageView:(id)arg3 ;
-(void)updatePosition:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(long long)count;
-(void)reset;
-(void)setCount:(long long)arg1 ;
@end

