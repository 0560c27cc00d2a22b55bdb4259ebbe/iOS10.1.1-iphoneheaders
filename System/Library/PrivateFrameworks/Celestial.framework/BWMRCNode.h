/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:49 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@class NSArray, NSDictionary;

@interface BWMRCNode : BWNode {

	/*function pointer*/void* _createSampleBufferProcessorFunction;
	OpaqueFigSampleBufferProcessorRef _sampleBufferProcessor;
	NSArray* _symbologiesArray;
	NSArray* _mrcIdentifiers;
	long long _lastMRCCount;
	CGRect _rectOfInterest;
	NSDictionary* _metadataIdentifierToSymbologyDictionary;

}
+(void)initialize;
-(id)init;
-(void)dealloc;
-(id)nodeType;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(int)_setupSampleBufferProcessor;
-(void)setMrcIdentifiers:(id)arg1 ;
-(id)_newSymbologiesArrayFromIdentifiers:(id)arg1 ;
-(void)_teardownSampleBufferProcessor;
-(id)mrcIdentifiers;
-(BOOL)_shouldEmitSBuf:(long long)arg1 ;
-(CGRect)rectOfInterest;
-(void)setRectOfInterest:(CGRect)arg1 ;
@end

