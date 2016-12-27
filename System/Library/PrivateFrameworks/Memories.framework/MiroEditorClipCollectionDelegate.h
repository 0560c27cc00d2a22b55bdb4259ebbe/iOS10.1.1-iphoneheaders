/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:22 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MiroEditorClipCollectionDelegate <NSObject>
@optional
-(id)clipCollection:(id)arg1 willSetClip:(id)arg2 onCell:(id)arg3 indexPath:(id)arg4;
-(void)clipCollection:(id)arg1 didSetClipOnCell:(id)arg2 indexPath:(id)arg3;
-(void)clipCollection:(id)arg1 didSnapToIndexPath:(id)arg2;
-(void)clipCollection:(id)arg1 didSelectIndexPath:(id)arg2;
-(void)clipCollection:(id)arg1 didBeginDisplayingCell:(id)arg2 indexPath:(id)arg3;
-(void)clipCollection:(id)arg1 didEndDisplayingCell:(id)arg2 indexPath:(id)arg3;
-(void)clipCollection:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
-(void)clipCollectionDidScroll:(id)arg1;
-(void)clipCollection:(id)arg1 willBeginInteractiveMovementForItemAtIndexPath:(id)arg2;
-(void)clipCollection:(id)arg1 didEndInteractiveMovementForItemAtIndexPath:(id)arg2;
-(void)clipCollection:(id)arg1 didCancelInteractiveMovementForItemAtIndexPath:(id)arg2;

@end

