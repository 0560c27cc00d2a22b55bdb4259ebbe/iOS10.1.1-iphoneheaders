/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:31 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SCROBrailleDriverProtocol.h>

@class NSString;

@interface SCROBrailleStealthDriver : NSObject <SCROBrailleDriverProtocol> {

	BOOL _isDriverLoaded;
	NSString* _modelIdentifier;
	long long _mainSize;
	long long _statusSize;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isInputEnabled;
-(id)init;
-(void)dealloc;
-(id)modelIdentifier;
-(unsigned long long)interfaceVersion;
-(int)loadDriverWithIOElement:(id)arg1 ;
-(BOOL)unloadDriver;
-(BOOL)isDriverLoaded;
-(BOOL)isSleeping;
-(BOOL)supportsBlinkingCursor;
-(BOOL)postsKeyboardEvents;
-(int)brailleInputMode;
-(id)getInputEvents;
-(long long)mainSize;
-(long long)statusSize;
-(BOOL)setMainCells:(const char*)arg1 length:(long long)arg2 ;
-(BOOL)setStatusCells:(const char*)arg1 length:(long long)arg2 ;
@end

