/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:09 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSPStreamingDistributableUnarchiver <NSObject>
@required
-(BOOL)handleArchivedVersions:(SCD_Struct_TS288)arg1 error:(id*)arg2;
-(BOOL)handleObjectWithIdentifier:(long long)arg1 fileStateIdentifier:(id)arg2 version:(unsigned)arg3 classType:(int)arg4 stream:(id)arg5 length:(long long)arg6 relationshipTargets:(long long*)arg7 relationshipCount:(unsigned)arg8 error:(id*)arg9;
-(BOOL)handleFileDescriptorProtoWithInputStream:(id)arg1 length:(unsigned)arg2 error:(id*)arg3;
-(BOOL)handleClassInfoWithClassType:(int)arg1 className:(id)arg2 isProtobufClass:(BOOL)arg3 error:(id*)arg4;

@end

