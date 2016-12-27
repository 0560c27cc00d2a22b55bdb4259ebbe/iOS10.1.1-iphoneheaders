/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:16 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OCDEncryptedReader.h>

@class OCPZipPackage;

@interface OCXReader : OCDEncryptedReader {

	OCPZipPackage* mZipPackage;
	const void* mDataBytes;

}

@property (nonatomic,retain) OCPZipPackage * zipPackage; 
-(void)dealloc;
-(BOOL)start;
-(BOOL)retainDecryptorWithErrorCode:(int*)arg1 ;
-(BOOL)isBinaryReader;
-(id)read;
-(OCPZipPackage *)zipPackage;
-(void)setZipPackage:(OCPZipPackage *)arg1 ;
-(BOOL)verifyFileFormat;
-(void)restartReaderToUseDecryptedDocument;
@end

