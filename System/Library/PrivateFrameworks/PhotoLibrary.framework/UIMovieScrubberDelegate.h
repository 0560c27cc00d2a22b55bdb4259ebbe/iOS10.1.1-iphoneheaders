/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:42 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIMovieScrubberDelegate <NSObject>
@optional
-(void)movieScrubber:(id)arg1 valueDidChange:(double)arg2;
-(void)movieScrubber:(id)arg1 editingStartValueDidChange:(double)arg2;
-(void)movieScrubber:(id)arg1 editingEndValueDidChange:(double)arg2;
-(void)movieScrubberWillBeginRequestingThumbnails:(id)arg1;
-(void)movieScrubberDidFinishRequestingThumbnails:(id)arg1;
-(void)movieScrubberWillBeginEditing:(id)arg1;
-(void)movieScrubberDidCancelEditing:(id)arg1;
-(void)movieScrubberDidBeginEditing:(id)arg1;
-(void)movieScrubberEditingAnimationFinished:(id)arg1;
-(void)movieScrubber:(id)arg1 widthDelta:(float)arg2 originXDelta:(float)arg3;
-(void)movieScrubberDidBeginAnimatingZoom:(id)arg1;
-(void)movieScrubberDidEndAnimatingZoom:(id)arg1;
-(void)movieScrubber:(id)arg1 willZoomToMinimumValue:(double)arg2 maximumValue:(double)arg3;
-(void)movieScrubberDidBeginScrubbing:(id)arg1 withHandle:(int)arg2;
-(void)movieScrubberDidEndScrubbing:(id)arg1 withHandle:(int)arg2;

@end

