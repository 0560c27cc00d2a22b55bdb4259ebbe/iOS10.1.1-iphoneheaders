/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:10 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioToolbox/AudioToolbox-Structs.h>
#import <AudioToolbox/AUAudioUnit.h>

@protocol OS_dispatch_queue;
@class NSObject, AUV2BridgeBusArray, AUParameterTree;

@interface AUAudioUnitV2Bridge : AUAudioUnit {

	NSObject*<OS_dispatch_queue> _eventListenerQueue;
	AUListenerBaseRef _eventListener;
	AUListenerBaseRef _parameterListener;
	BOOL _removingObserverWithContext;
	OpaqueAudioComponentInstanceRef _audioUnit;
	BOOL _audioUnitIsOwned;
	AUV2BridgeBusArray* _inputBusses;
	AUV2BridgeBusArray* _outputBusses;
	AUParameterTree* _cachedParameterTree;
	unique_ptr<AUAudioUnitV2Bridge_Renderer, std::__1::default_delete<AUAudioUnitV2Bridge_Renderer> >* _renderer;

}
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(id)initWithComponentDescription:(AudioComponentDescription)arg1 options:(unsigned)arg2 error:(id*)arg3 ;
-(BOOL)allocateRenderResourcesAndReturnError:(id*)arg1 ;
-(id)inputBusses;
-(id)outputBusses;
-(/*^block*/id)internalRenderBlock;
-(id)parameterTree;
-(id)channelCapabilities;
-(id)initWithAudioUnit:(OpaqueAudioComponentInstanceRef)arg1 description:(AudioComponentDescription)arg2 ;
-(BOOL)_elementCountWritable:(unsigned)arg1 ;
-(BOOL)_setElementCount:(unsigned)arg1 count:(unsigned)arg2 error:(id*)arg3 ;
-(int)enableBus:(unsigned)arg1 scope:(unsigned)arg2 enable:(BOOL)arg3 ;
-(unsigned)_elementCount:(unsigned)arg1 ;
-(void)_addOrRemoveParameterListeners:(BOOL)arg1 ;
-(void)_rebuildBusses:(unsigned)arg1 ;
-(void)init2;
-(void)_createEventListenerQueue;
-(void)_invalidateParameterTree;
-(void)dealloc;
-(void)reset;
-(void)deallocateRenderResources;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 ;
@end

