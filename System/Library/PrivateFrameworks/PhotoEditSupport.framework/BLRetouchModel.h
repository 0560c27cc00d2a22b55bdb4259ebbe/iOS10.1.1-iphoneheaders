/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:41 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoEditSupport/PhotoEditSupport-Structs.h>
@class NSDictionary, BLRetouchLayerStack, NSLock;

@interface BLRetouchModel : NSObject {

	NSDictionary* _strokesDataDictionary;
	BLRetouchLayerStack* _layerStack;
	NSLock* _lock;

}
-(void)dealloc;
-(void)setLayerStack:(id)arg1 ;
-(id)layerStack;
-(id)initWithAdjustmentsDictionary:(id)arg1 ;
-(BOOL)hasRetouch;
-(BOOL)hasLayerStack;
-(BOOL)needsPadding;
-(double)paddingForSize:(CGSize)arg1 ;
-(void)buildLayerStackWithMaskSourceImage:(id)arg1 ;
-(id)imageForWorkingImageBuffer:(id)arg1 workingTransform:(CGAffineTransform)arg2 inDestRect:(CGRect)arg3 withPadding:(double)arg4 ;
-(id)imageForWorkingImage:(id)arg1 workingTransform:(CGAffineTransform)arg2 inDestRect:(CGRect)arg3 withPadding:(double)arg4 ;
@end

