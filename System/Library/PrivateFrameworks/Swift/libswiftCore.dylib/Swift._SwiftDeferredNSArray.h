/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:43:42 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Swift/libswiftCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libswiftCore.dylib/Swift._SwiftNativeNSArrayWithContiguousStorage.h>

@class _TtCs27_ContiguousArrayStorageBase;

@interface Swift._SwiftDeferredNSArray : Swift._SwiftNativeNSArrayWithContiguousStorage {

	 _heapBufferBridged_DoNotUse;
	 _nativeStorage;

}

@property (retain,nonatomic) id _heapBufferBridged_DoNotUse;                                     //@synthesize heapBufferBridged_DoNotUse=_heapBufferBridged_DoNotUse - In the implementation block
@property (readonly,nonatomic) _TtCs27_ContiguousArrayStorageBase * _nativeStorage;              //@synthesize nativeStorage=_nativeStorage - In the implementation block
@property (readonly,nonatomic) id* _heapBufferBridgedPtr; 
@property (readonly,nonatomic) long long count; 
-(id)init;
-(long long)count;
-(id)_heapBufferBridged_DoNotUse;
-(void)set_heapBufferBridged_DoNotUse:(id)arg1 ;
-(id*)_heapBufferBridgedPtr;
-(_TtCs27_ContiguousArrayStorageBase *)_nativeStorage;
-(id)initWith_nativeStorage:(id)arg1 ;
@end

