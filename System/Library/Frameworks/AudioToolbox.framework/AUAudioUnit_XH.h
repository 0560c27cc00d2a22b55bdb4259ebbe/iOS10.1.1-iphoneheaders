/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:09 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioToolbox/AudioToolbox-Structs.h>
#import <AudioToolbox/AUAudioUnit.h>

@protocol OS_dispatch_queue, AUAudioUnitXPCProtocol;
@class NSExtension, NSUUID, AUAudioUnitBusArray_XH, AUParameterTree, NSObject;

@interface AUAudioUnit_XH : AUAudioUnit {

	NSExtension* _extension;
	OpaqueAudioComponentInstanceRef _componentInstance;
	NSUUID* _requestIdentifier;
	int _remotePID;
	BOOL _canRender;
	BOOL _canProcess;
	BOOL _removingObserverWithContext;
	AUAudioUnitBusArray_XH* _inputBusses;
	AUAudioUnitBusArray_XH* _outputBusses;
	unique_ptr<AUProcAndUserData, std::__1::default_delete<AUProcAndUserData> >* _elementCountListenerToken;
	unique_ptr<AUSyncCaller, std::__1::default_delete<AUSyncCaller> >* _syncCaller;
	recursive_mutex _propListenerMutex;
	vector<AUAudioUnit_XH_PropListener, std::__1::allocator<AUAudioUnit_XH_PropListener> >* _propListeners;
	IPCAURenderingClient* _renderClient;
	AUParameterTree* _cachedParameterTree;
	NSObject*<OS_dispatch_queue> _viewControllerRequestQueue;
	id<AUAudioUnitXPCProtocol> _remote;

}

@property (nonatomic,readonly) id<AUAudioUnitXPCProtocol> remote;              //@synthesize remote=_remote - In the implementation block
+(void)instantiateWithExtension:(id)arg1 componentDescription:(AudioComponentDescription)arg2 instance:(OpaqueAudioComponentInstanceRef)arg3 options:(unsigned)arg4 completionHandler:(/*^block*/id)arg5 ;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(id)_getValueForProperty:(id)arg1 ;
-(BOOL)_setBusCount:(unsigned long long)arg1 scope:(unsigned)arg2 error:(id*)arg3 ;
-(void)doOpen:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)internalInitWithExtension:(id)arg1 componentDescription:(AudioComponentDescription)arg2 instance:(OpaqueAudioComponentInstanceRef)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)allocateRenderResourcesAndReturnError:(id*)arg1 ;
-(id)_getBus:(unsigned)arg1 scope:(unsigned)arg2 error:(id*)arg3 ;
-(void)_refreshBusses:(unsigned)arg1 ;
-(void)didCrash;
-(id)inputBusses;
-(id)outputBusses;
-(/*^block*/id)internalRenderBlock;
-(id)parameterTree;
-(id)parametersForOverviewWithCount:(long long)arg1 ;
-(void)requestViewControllerWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)reset;
-(void)deallocateRenderResources;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 ;
-(void)_setValue:(id)arg1 forProperty:(id)arg2 ;
-(id<AUAudioUnitXPCProtocol>)remote;
-(id)_getValueForKey:(id)arg1 ;
-(void)propertiesChanged:(id)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(void)_setValue:(id)arg1 forKey:(id)arg2 ;
@end

