/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:08 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>

@class NSHashTable;

@interface TSPPasteboardMetadata : TSPObject {

	PasteboardMetadata* _message;
	BOOL _isCrossAppPaste;
	BOOL _isCrossDocumentPaste;
	NSHashTable* _dataReferences;

}

@property (nonatomic,readonly) BOOL isCrossAppPaste;                      //@synthesize isCrossAppPaste=_isCrossAppPaste - In the implementation block
@property (nonatomic,readonly) BOOL isCrossDocumentPaste;                 //@synthesize isCrossDocumentPaste=_isCrossDocumentPaste - In the implementation block
@property (nonatomic,readonly) NSHashTable * dataReferences;              //@synthesize dataReferences=_dataReferences - In the implementation block
+(id)appNameAndVersion;
+(id)bundleIdentifier;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(long long)tsp_identifier;
-(NSHashTable *)dataReferences;
-(BOOL)isCrossDocumentPaste;
-(BOOL)isCrossAppPaste;
-(id)initWithContext:(id)arg1 dataReferences:(id)arg2 ;
-(id)initWithContext:(id)arg1 ;
-(PasteboardMetadata*)message;
@end

