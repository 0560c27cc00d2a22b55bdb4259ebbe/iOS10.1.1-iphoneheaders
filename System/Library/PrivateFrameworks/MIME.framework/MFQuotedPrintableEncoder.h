/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:08 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MIME/MFBaseFilterDataConsumer.h>

@interface MFQuotedPrintableEncoder : MFBaseFilterDataConsumer {

	unsigned long long _line;
	unsigned long long _matchedFrom;
	unsigned char _lastHorizontalWhitespace;
	BOOL _forTextPart;
	BOOL _lastWasNewLine;
	BOOL _forHeader;

}

@property (assign,nonatomic) BOOL forTextPart;              //@synthesize forTextPart=_forTextPart - In the implementation block
@property (assign,nonatomic) BOOL forHeader;                //@synthesize forHeader=_forHeader - In the implementation block
+(unsigned long long)requiredSizeToEncodeHeaderBytes:(const char*)arg1 length:(unsigned long long)arg2 ;
-(void)done;
-(long long)appendData:(id)arg1 ;
-(void)setForHeader:(BOOL)arg1 ;
-(BOOL)forTextPart;
-(BOOL)forHeader;
-(void)setForTextPart:(BOOL)arg1 ;
@end

