/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:08 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPPackageDataWriter.h>

@class NSURL, NSString;

@interface TSPDirectoryPackageDataWriter : NSObject <TSPPackageDataWriter> {

	NSURL* _URL;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)writeData:(id)arg1 toRelativePath:(id)arg2 allowEncryption:(BOOL)arg3 error:(id*)arg4 ;
-(id)targetDataURLForPath:(id)arg1 ;
-(CGDataConsumerRef)newCGDataConsumerAtRelativePath:(id)arg1 ;
-(id)init;
-(id)initWithURL:(id)arg1 ;
@end

