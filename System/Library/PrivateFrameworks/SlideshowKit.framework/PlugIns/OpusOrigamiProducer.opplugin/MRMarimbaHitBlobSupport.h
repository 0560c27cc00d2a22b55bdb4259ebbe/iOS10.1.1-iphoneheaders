/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MRMarimbaHitBlobSupport
@required
-(BOOL)endLiveUpdateForHitBlob:(id)arg1;
-(void)endGesture:(id)arg1;
-(BOOL)beginLiveUpdateForHitBlob:(id)arg1;
-(CGPoint*)convertPoint:(CGPoint)arg1 toHitBlob:(id)arg2;
-(void)doGesture:(id)arg1;
-(void)cancelGesture:(id)arg1;
-(id)blobHitAtPoint:(CGPoint)arg1 fromObjectsForObjectIDs:(id)arg2 localPoint:(CGPoint*)arg3;
-(BOOL)getOnScreenVertices:(CGPoint)arg1 forHitBlob:(id)arg2;
-(void)beginGesture:(id)arg1;

@end

