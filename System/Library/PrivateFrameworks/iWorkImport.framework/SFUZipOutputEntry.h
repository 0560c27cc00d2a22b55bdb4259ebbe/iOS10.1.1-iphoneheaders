/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:06 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SFUZipOutputEntry : NSObject {

	NSString* name;
	unsigned utf8NameLength;
	BOOL isCompressed;
	BOOL isEncrypted;
	unsigned time;
	unsigned long long compressedSize;
	unsigned long long uncompressedSize;
	unsigned long long offset;
	unsigned long long compressedDataOffset;
	unsigned crc;
	BOOL isWrittenDirectlyToFile;
	BOOL is64Bit;

}
-(void)dealloc;
-(id)description;
-(long long)compareByOffset:(id)arg1 ;
@end

