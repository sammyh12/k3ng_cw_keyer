void setup(void);
void loop(void);
void check_for_dirty_configuration(void);
void check_memory_repeat(void);
void check_paddles(void);
void ptt_key(void);
void ptt_unkey(void);
void check_ptt_tail(void);
void write_settings_to_eeprom(int initialize_eeprom);
int read_settings_from_eeprom(void);
void check_dit_paddle(void);
void check_dah_paddle(void);
void speed_change(int change);
void speed_set(int wpm_set);
int get_cw_input_from_user(unsigned int exit_time_seconds);
void command_mode(void);
void command_set_mem_repeat_delay(void);
void adjust_dah_to_dit_ratio(int adjustment);
void command_dah_to_dit_ratio_adjust(void);
void command_tuning_mode(void);
void sidetone_adj(int hz);
void command_sidetone_freq_adj(void);
void command_speed_mode(void);
void send_tx(void);
void check_the_memory_buttons(void);
void initialize_analog_button_array(void);
void check_command_buttons(void);
void service_dit_dah_buffers(void);
void beep(void);
void boop(void);
void beep_boop(void);
void boop_beep(void);
void send_dits(int dits);
void send_dahs(int dahs);
int uppercase(int charbytein);
void serial_qrss_mode(void);
void service_send_buffer(byte no_print);
void clear_send_buffer(void);
void remove_from_send_buffer(void);
void service_command_line_interface(void);
void check_serial(void);
void process_serial_command(void);
void service_serial_paddle_echo(void);
void serial_set_memory_repeat(void);
void repeat_play_memory(void);
void serial_change_wordspace(void);
void serial_switch_tx(void);
void serial_set_dit_to_dah_ratio(void);
void serial_set_serial_number(void);
void serial_set_sidetone_freq(void);
void serial_wpm_set(void);
void serial_set_weighting(void);
void serial_tune_command(void);
void serial_status(void);
int convert_cw_number_to_ascii(long number_in);
void initialize_eeprom_memories(void);
void serial_status_memories(void);
void serial_program_memory(void);
void command_program_memory(void);
void check_button0(void);
void program_memory(int memory_number);
void initialize_pins(void);
void initialize_debug_startup(void);
void initialize_keyer_state(void);
void initialize_potentiometer(void);
void initialize_rotary_encoder(void);
void initialize_default_modes(void);
void initialize_watchdog(void);
void check_eeprom_for_initialization(void);
void check_for_beacon_mode(void);
void check_for_debug_modes(void);
void initialize_serial_port(void);
void initialize_ps2_keyboard(void);
void initialize_display(void);
void initialize_usb(void);
void add_to_send_buffer(byte);
void loop_element_lengths(float lengths, float additional_time_ms, int speed_wpm_in, byte sending_type);
void play_memory(byte memory_number);
void serial_play_memory(byte memory_number);
int serial_get_number_input(byte places,int lower_limit, int upper_limit);
void wakeup(void);
void serial_cw_practice(void);
void serial_set_farnsworth(void);
void us_callsign_practice(void);