/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBSceneResizeSnakebiteGestureRecognizerDelegate <SBSystemGestureRecognizerDelegate>
@required
-(double)locationOfDividerForSceneResizeGestureRecognizer:(id)arg1;
-(double)sceneResizeGestureRecognizer:(id)arg1 locationForViewOffset:(double)arg2;
-(double)sceneResizeGestureRecognizer:(id)arg1 viewOffsetForLocation:(double)arg2;
-(double)heightOfSingleTapAreaInDividerForSceneResizeGestureRecognizer:(id)arg1;
-(double)heightOfPinningAreaInDividerForSceneResizeGestureRecognizer:(id)arg1;
-(long long)interfaceOrientationForSceneResizeGestureRecognizer:(id)arg1;
-(double)minimumDurationForSingleTouchForSceneResizeGestureRecognizer:(id)arg1;
-(double)minimumDistanceForSingleTouchForSceneResizeGestureRecognizer:(id)arg1;
-(double)verticalCenterOfSingleTouchRegionForSceneResizeGestureRecognizer:(id)arg1;
-(BOOL)sceneResizeGestureRecognizer:(id)arg1 shouldWaitForInvalidSingleTouchToBecomeValidWithDistanceFromDivider:(double)arg2;
-(BOOL)sceneResizeGestureRecognizerShouldOnlyRecognizeForSingleTouch:(id)arg1;

@end

