/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:48 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWSourceNode.h>

@protocol OS_dispatch_queue;
@class CMMotionManager, NSObject;

@interface BWCoreMotionMetadataSourceNode : BWSourceNode {

	CMMotionManager* _motionManager;
	int _bufferGenerationRate;
	int _samplesPerBuffer;
	BOOL _running;
	BWCoreMotionMetadataSampleData* _sampleDataForBuffer;
	int _numSamplesInBuffer;
	opaqueCMFormatDescriptionRef _boxedMetadataFormatDescription;
	unsigned _localIDOfCoreMotionMetadata_BE;
	NSObject*<OS_dispatch_queue> _emitSamplesDispatchQueue;
	opaqueCMFormatDescriptionRef _formatDescription;

}

@property (nonatomic,readonly) opaqueCMFormatDescriptionRef formatDescription;              //@synthesize formatDescription=_formatDescription - In the implementation block
+(void)initialize;
+(int)extractBWCoreMotionMetadataFromBlockBuffer:(OpaqueCMBlockBufferRef)arg1 intoNativeEndianSampleData:(BWCoreMotionMetadataSampleData*)arg2 ;
+(int)extractBWCoreMotionMetadataFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 intoNativeEndianSampleData:(BWCoreMotionMetadataSampleData*)arg2 ;
-(void)dealloc;
-(id)nodeSubType;
-(void)_emitMetadataSampleBuffer;
-(id)initWithBufferGenerationRate:(int)arg1 samplesPerBuffer:(int)arg2 ;
-(OpaqueCMClockRef)clock;
-(BOOL)start:(id*)arg1 ;
-(BOOL)stop:(id*)arg1 ;
-(opaqueCMFormatDescriptionRef)formatDescription;
@end

