/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDSiriSpeechRecognized : PBCodable <NSCopying> {
    struct { 
        unsigned int durationFromVoiceRecordingEnd : 1; 
        unsigned int durationFromVoiceSendEnd : 1; 
        unsigned int timestamp : 1; 
    unsigned long long _durationFromVoiceRecordingEnd;
    unsigned long long _durationFromVoiceSendEnd;
    } _has;
    unsigned long long _timestamp;
}

@property unsigned long long durationFromVoiceRecordingEnd;
@property unsigned long long durationFromVoiceSendEnd;
@property BOOL hasDurationFromVoiceRecordingEnd;
@property BOOL hasDurationFromVoiceSendEnd;
@property BOOL hasTimestamp;
@property unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)durationFromVoiceRecordingEnd;
- (unsigned long long)durationFromVoiceSendEnd;
- (BOOL)hasDurationFromVoiceRecordingEnd;
- (BOOL)hasDurationFromVoiceSendEnd;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setDurationFromVoiceRecordingEnd:(unsigned long long)arg1;
- (void)setDurationFromVoiceSendEnd:(unsigned long long)arg1;
- (void)setHasDurationFromVoiceRecordingEnd:(BOOL)arg1;
- (void)setHasDurationFromVoiceSendEnd:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
