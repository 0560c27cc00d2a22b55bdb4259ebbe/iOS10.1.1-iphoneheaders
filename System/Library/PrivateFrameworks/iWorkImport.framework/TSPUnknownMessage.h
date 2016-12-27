/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:08 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPArchivableContent.h>

@protocol OS_dispatch_data;
@class NSObject, TSPLazyReferenceArray, NSArray, NSString;

@interface TSPUnknownMessage : NSObject <TSPArchivableContent> {

	MessageInfo* _messageInfo;
	NSObject*<OS_dispatch_data> _messageData;
	TSPLazyReferenceArray* _objects;
	NSArray* _datas;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isContentUnknown; 
@property (nonatomic,readonly) BOOL isDiff; 
@property (nonatomic,readonly) unsigned long long messageVersion; 
@property (nonatomic,readonly) const FieldPath* fieldPath; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_data> messageData;              //@synthesize messageData=_messageData - In the implementation block
@property (nonatomic,retain) TSPLazyReferenceArray * objects;                        //@synthesize objects=_objects - In the implementation block
@property (nonatomic,retain) NSArray * datas;                                        //@synthesize datas=_datas - In the implementation block
-(BOOL)isDiff;
-(const FieldPath*)fieldPath;
-(const MessageInfo*)messageInfo;
-(BOOL)isContentUnknown;
-(id)initWithMessageInfo:(const MessageInfo*)arg1 data:(id)arg2 ;
-(id)init;
-(void)setDatas:(NSArray *)arg1 ;
-(NSArray *)datas;
-(TSPLazyReferenceArray *)objects;
-(void)setObjects:(TSPLazyReferenceArray *)arg1 ;
-(unsigned long long)messageVersion;
-(NSObject*<OS_dispatch_data>)messageData;
@end

