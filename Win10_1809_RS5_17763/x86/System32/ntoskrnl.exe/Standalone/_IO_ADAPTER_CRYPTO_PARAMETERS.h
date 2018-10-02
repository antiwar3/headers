typedef struct _IO_ADAPTER_CRYPTO_PARAMETERS
{
  /* 0x0000 */ unsigned __int64 Tweak;
  /* 0x0008 */ struct _IO_ADAPTER_CRYPTO_KEY_DESCRIPTOR* KeyDescriptor;
  /* 0x000c */ long __PADDING__[1];
} IO_ADAPTER_CRYPTO_PARAMETERS, *PIO_ADAPTER_CRYPTO_PARAMETERS; /* size: 0x0010 */

