/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <UIKit/UIScrollView.h>

@interface RCWaveformScrollView : UIScrollView {

	unsigned long long _ignoreContentOffsetChangesCount;

}
-(void)setContentOffset:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(void)setContentOffset:(CGPoint)arg1 ;
-(CGPoint)contentOffsetInPresentationLayer:(BOOL)arg1 ;
-(void)beginIgnoringContentOffsetChanges;
-(void)endIgnoringContentOffsetChanges;
-(CGRect)convertRect:(CGRect)arg1 fromView:(id)arg2 usingCurrentAnimatedPosition:(BOOL)arg3 ;
@end

