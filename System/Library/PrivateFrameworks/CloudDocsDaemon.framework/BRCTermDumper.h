/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:04 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/BRCDumper.h>

@interface BRCTermDumper : BRCDumper {

	int _fd;
	unsigned long long _termWidth;
	unsigned long long _usedTermWidth;
	int _curAttrs;
	int _curFg;
	int _curBg;
	BOOL _isatty;
	BOOL _useColor;
	BOOL _supportsEscapeSequences;

}

@property (nonatomic,readonly) BOOL isatty;                               //@synthesize isatty=_isatty - In the implementation block
@property (nonatomic,readonly) BOOL supportsEscapeSequences;              //@synthesize supportsEscapeSequences=_supportsEscapeSequences - In the implementation block
@property (nonatomic,readonly) BOOL useColor;                             //@synthesize useColor=_useColor - In the implementation block
+(void)setupPagerForFd:(int)arg1 ;
+(void)execPagerOnFileFd:(int)arg1 ;
-(void)put:(id)arg1 ;
-(void)reset;
-(id)initWithFd:(int)arg1 forceColor:(BOOL)arg2 ;
-(id)startStringForFgColor:(int)arg1 bgColor:(int)arg2 attr:(int)arg3 ;
-(id)stringForReset;
-(void)startFgColor:(int)arg1 bgColor:(int)arg2 attr:(int)arg3 ;
-(void)write:(const char*)arg1 ;
-(unsigned long long)_startInCString:(char)arg1 fgColor:(int)arg2 bgColor:(int)arg3 attr:(int)arg4 ;
-(void)cursorGotoLineStart;
-(void)puts:(const char*)arg1 len:(unsigned long long)arg2 ;
-(void)_putsAndCrop:(const char*)arg1 len:(unsigned long long)arg2 ;
-(void)puts:(const char*)arg1 ;
-(void)startPager;
-(void)eraseEndOfLine;
-(void)eraseStartOfLine;
-(void)eraseLine;
-(void)eraseScreenDown;
-(void)eraseScreenUp;
-(void)cursorSave;
-(void)cursorRestore;
-(void)cursorUp:(unsigned)arg1 ;
-(void)cursorDown:(unsigned)arg1 ;
-(void)cursorRight:(unsigned)arg1 ;
-(void)cursorLeft:(unsigned)arg1 ;
-(void)startNewLine;
-(void)endLine;
-(unsigned long long)remainingSpace;
-(BOOL)isatty;
-(BOOL)useColor;
-(BOOL)supportsEscapeSequences;
@end

