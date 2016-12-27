/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:10 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioToolbox/AudioToolbox-Structs.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/AUPBServing.h>

@protocol AUPBRegistrarHosting;
@class NSXPCConnection, NSXPCListener, NSMutableArray, NSString;

@interface AUPBServer : NSObject <NSXPCListenerDelegate, AUPBServing> {

	NSXPCConnection* mRegistrarConnection;
	id<AUPBRegistrarHosting> mProxyInterface;
	NSXPCListener* mListener;
	NSMutableArray* mClientConnections;
	unique_ptr<CAMutex, std::__1::default_delete<CAMutex> >* mLock;
	map<unsigned int, RemoteAUHandleInfo, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, RemoteAUHandleInfo> > >* mAUHandlesToInfo;
	map<unsigned int, AUProcessingBlock, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, AUProcessingBlock> > >* mBlockHandlesToMethods;
	unsigned mAUPBRefCounter;
	unique_ptr<TestAUProcessingBlock, std::__1::default_delete<TestAUProcessingBlock> >* mTestBlock;
	unsigned mAUHandleCntr;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)handleRegistrarCrash;
-(void)copyProcessingBlock:(unsigned)arg1 property:(unsigned)arg2 intoReply:(/*^block*/id)arg3 ;
-(void)setProcessingBlock:(unsigned)arg1 property:(unsigned)arg2 value:(id)arg3 withReply:(/*^block*/id)arg4 ;
-(void)getAudioUnit:(unsigned)arg1 propertyInfo:(unsigned)arg2 onScope:(unsigned)arg3 element:(unsigned)arg4 inReply:(/*^block*/id)arg5 ;
-(void)getAudioUnit:(unsigned)arg1 property:(unsigned)arg2 onScope:(unsigned)arg3 element:(unsigned)arg4 inReply:(/*^block*/id)arg5 ;
-(void)setAudioUnit:(unsigned)arg1 property:(unsigned)arg2 onScope:(unsigned)arg3 element:(unsigned)arg4 value:(id)arg5 withReply:(/*^block*/id)arg6 ;
-(void)getAudioUnit:(unsigned)arg1 parameter:(unsigned)arg2 onScope:(unsigned)arg3 element:(unsigned)arg4 inReply:(/*^block*/id)arg5 ;
-(void)setAudioUnit:(unsigned)arg1 parameter:(unsigned)arg2 onScope:(unsigned)arg3 element:(unsigned)arg4 value:(float)arg5 withReply:(/*^block*/id)arg6 ;
-(OpaqueRemoteAudioUnitRef)auRefFromHandle:(unsigned)arg1 ;
-(unsigned)auHandleFromRef:(OpaqueRemoteAudioUnitRef)arg1 ;
-(void)processingBlockRef:(OpaqueAUPBRef)arg1 propertyChanged:(unsigned)arg2 ;
-(OpaqueAUPBRef)registerBlock:(const AUPBMethods*)arg1 withUserData:(void*)arg2 ;
-(int)unregisterBlock:(OpaqueAUPBRef)arg1 ;
-(int)registerAU:(OpaqueRemoteAudioUnitRef)arg1 inBlock:(OpaqueAUPBRef)arg2 ;
-(int)unregisterAU:(OpaqueRemoteAudioUnitRef)arg1 ;
-(void)processingBlock:(OpaqueAUPBRef)arg1 properties:(const unsigned*)arg2 count:(unsigned)arg3 changedWithQualifierData:(void*)arg4 length:(unsigned)arg5 ;
-(void)startRegistrarConnection;
-(void)blockListChanged;
-(unsigned)handleFromAUPBRef:(OpaqueAUPBRef)arg1 ;
-(AUProcessingBlock*)aupbFromRef:(OpaqueAUPBRef)arg1 ;
-(AUProcessingBlock*)aupbFromAUHandle:(unsigned)arg1 ;
-(id)init;
-(void)dealloc;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(unsigned long long)retainCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
@end

