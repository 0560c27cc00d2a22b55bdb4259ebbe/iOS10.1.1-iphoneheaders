/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:44 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBWalletPrearmRecognizerDelegate;
@class BSTimer;

@interface SBWalletPrearmRecognizer : NSObject {

	id<SBWalletPrearmRecognizerDelegate> _delegate;
	double _timeout;
	BSTimer* _timer;
	BOOL _invalidated;

}
-(double)_computeDoubleTapTimeout;
-(void)_invalidateForFailureReason:(unsigned long long)arg1 ;
-(void)_invalidateForSuccess;
-(void)startRecognizing;
-(void)menuButtonSinglePress;
-(void)menuButtonDoublePress;
-(void)dealloc;
-(void)invalidate;
-(id)initWithDelegate:(id)arg1 ;
-(void)_invalidate;
@end

