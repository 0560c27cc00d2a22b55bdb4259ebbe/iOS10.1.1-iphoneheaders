/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:09 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UICollectionView.h>

@interface SKUIViewControllerContainerCollectionView : UICollectionView {

	double _competingScrollViewPanGestureRecognizerHysteresis;
	BOOL _forcingIncreasedPanGestureRecognizerHysteresis;
	double _originalPanGestureRecognizerHysteresis;
	CFRunLoopObserverRef _runLoopObserver;

}
-(void)dealloc;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_endDynamicHysteresisIncrease;
-(void)_beginDynamicHysteresisIncreaseWithCompetingScrollView:(id)arg1 ;
-(void)_updateStateForDynamicHysteresisIncrease;
@end
