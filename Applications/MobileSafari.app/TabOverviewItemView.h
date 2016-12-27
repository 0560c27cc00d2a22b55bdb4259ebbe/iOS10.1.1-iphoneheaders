/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <MobileSafari/TabThumbnailView.h>

@class UIView, UIImageView;

@interface TabOverviewItemView : TabThumbnailView {

	double _topBackdropHeight;
	UIView* _snapshotClipperView;
	UIImageView* _snapshotView;
	UIView* _dimmingView;
	CGSize _windowSize;

}

@property (nonatomic,retain) UIView * snapshotClipperView;              //@synthesize snapshotClipperView=_snapshotClipperView - In the implementation block
@property (nonatomic,retain) UIImageView * snapshotView;                //@synthesize snapshotView=_snapshotView - In the implementation block
@property (nonatomic,retain) UIView * dimmingView;                      //@synthesize dimmingView=_dimmingView - In the implementation block
@property (assign,nonatomic) double topBackdropHeight;                  //@synthesize topBackdropHeight=_topBackdropHeight - In the implementation block
@property (assign,nonatomic) CGSize windowSize;                         //@synthesize windowSize=_windowSize - In the implementation block
-(void)updateSnapshotWithImage:(id)arg1 ;
-(UIView *)snapshotClipperView;
-(double)topBackdropHeight;
-(void)setTopBackdropHeight:(double)arg1 ;
-(void)setSnapshotClipperView:(UIView *)arg1 ;
-(void)layoutSubviews;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)initWithImage:(id)arg1 ;
-(UIImageView *)snapshotView;
-(UIView *)dimmingView;
-(void)setDimmingView:(UIView *)arg1 ;
-(void)setSnapshotView:(UIImageView *)arg1 ;
-(CGSize)windowSize;
-(void)setWindowSize:(CGSize)arg1 ;
@end

